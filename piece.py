POSITION_TEMPLATE = "\t{time},{vector}\n"
VECTOR_TEMPLATE = "<{0},{1},{height}>"

class Color:
    WHITE = 0
    BLACK = 1

class Piece:
    abbreviation = ""
    
    def __init__(self,position,color,identifier,board):
        if(isinstance(position,tuple)):
            self.position = position
        else:
            self.position = (0,0)
        self.identifier = identifier
        self.color = color
        self.board = board
        self.buffer = ""

    
    def record_to_buffer(self,time,postion,height):
        self.buffer = self.buffer + POSITION_TEMPLATE.format(
            time = time,
            vector = VECTOR_TEMPLATE.format(*postion,height=height)
        )

    def make_move(self,move,time,duration):
        position = move_position(move)
        self.record_to_buffer(time             ,self.position,0)
        self.record_to_buffer(time+duration*.33,self.position,2*self.board.space_width)
        self.record_to_buffer(time+duration*.66,position     ,2*self.board.space_width)
        self.record_to_buffer(time+duration    ,position     ,0)
        self.position = position

    #TODO maybe, make a better remove animation. right now, all it does is lift it straight up into the air.
    def remove(self,time,duration):
        self.record_to_buffer(time,self.position,0)
        self.record_to_buffer(time+duration,self.position,self.board.space_width*10)

    def buffer_to_string(self):
        return "#declare {identifier}=\n\
        spline{{\n\
        \tcubic_spline\n\
        {buffer}\n\
        }}".format(identifier=self.identifier,buffer=self.buffer)

    def can_reach(self,move):
        pass

    def can_execute(self,move):
        if(len(move)>2):
            if(move[0] == self.abbreviation and self.can_reach(move_position(move))):
                return True
        elif self.can_reach(move_position(move)):
            return True
        else:
            return False

def move_position(move):
    postion_string = move[-2:]
    return (ord(postion_string[0])-97,int(postion_string[1])-1)

class Rook(Piece):
    abbreviation = "R"
    def can_reach(self,position):
        if( 
            position[0] == self.position[0] or 
            position[1] == self.position[1]
        ):
            return True
        else:
            return False

class Bishop(Piece):
    abbreviation = "B"
    def can_reach(self,position):
        if(
            position[0] - self.position[0] == position[1] - self.position[1] or
            position[0] - self.position[0] == self.position[1] - position[1]
        ):
            return True
        else:
            return False

#TODO allow castle
class Knight(Piece):
    abbreviation = "N"
    def can_reach(self,position):
        x_delta = abs(position[0]-self.position[0])
        y_delta = abs(position[1]-self.position[1])
        if(
            x_delta == 1 and y_delta == 2 or
            x_delta == 2 and y_delta == 1
        ):
            return True
        else:
            return False

class Queen(Piece):
    abbreviation = "Q"
    def can_reach(self,position):
        return Rook.can_reach(self,position) or Bishop.can_reach(self,position)

#TODO allow castle
class King(Piece):
    abbreviation = "K"
    def can_reach(self,position):
        x_delta = abs(position[0]-self.position[0])
        y_delta = abs(position[1]-self.position[1])
        if(
            x_delta <= 1 and
            y_delta <=1
        ):
            return True
        else:
            return False

class Pawn(Piece):
    abbreviation = "p"
    is_first_move = True
    def make_move(self,*args):
        super().make_move(*args)
        if self.is_first_move:
            self.is_first_move = False

    def can_reach(self,position):
        y_delta = position[1]-self.position[1]
        max_stride = 2 if self.is_first_move else 1
        forward_direaction = 1 if self.color == Color.WHITE else -1 
        if(
            y_delta*forward_direaction <= max_stride
        ):
            return True
        else:
            return False