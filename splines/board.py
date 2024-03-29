from piece import Pawn, Rook, Bishop,King,Queen,Knight,Color,move_position
#64541217

class Board:
    space_width = 2
    pieces = []
    def __init__(self):
        #make pawns
        for i in range(8):
            self.pieces.append(Pawn((i,1),Color.WHITE,"WPawn{0}".format(i),self))
            self.pieces.append(Pawn((i,6),Color.BLACK,"BPawn{0}".format(i),self))
        #make white pieces
        self.pieces.append(  Rook((0,0),Color.WHITE,"WRook1"  ,self))
        self.pieces.append(  Rook((7,0),Color.WHITE,"WRook2"  ,self))
        self.pieces.append(Knight((1,0),Color.WHITE,"WKnight1",self))
        self.pieces.append(Knight((6,0),Color.WHITE,"WKnight2",self))
        self.pieces.append(Bishop((2,0),Color.WHITE,"WBishop1",self))
        self.pieces.append(Bishop((5,0),Color.WHITE,"WBishop2",self))
        self.pieces.append( Queen((3,0),Color.WHITE,"WQueen"  ,self))
        self.pieces.append(  King((4,0),Color.WHITE,"WKing"   ,self))
        #make black pieces
        self.pieces.append(  Rook((0,7),Color.BLACK,"BRook1"  ,self))
        self.pieces.append(  Rook((7,7),Color.BLACK,"BRook2"  ,self))
        self.pieces.append(Knight((1,7),Color.BLACK,"BKnight1",self))
        self.pieces.append(Knight((6,7),Color.BLACK,"BKnight2",self))
        self.pieces.append(Bishop((2,7),Color.BLACK,"BBishop1",self))
        self.pieces.append(Bishop((5,7),Color.BLACK,"BBishop2",self))
        self.pieces.append( Queen((3,7),Color.BLACK,"BQueen"  ,self))
        self.pieces.append(  King((4,7),Color.BLACK,"BKing"   ,self))

    def execute_move(self,move,color,time,duration):
        
        if move == "O-O-O":
            self.castle(color,time,duration)
            return
        piece = self.get_can_execute(move,color)
        if("x" in move):
            to_take = self.get_piece_at(move_position(move))
            to_take.buffer += "\t//removed by {0}\n".format(move)
            to_take.remove(time+duration*.2,duration*.8)        
        piece.make_move(move_position(move),time,duration)

    def castle(self,color,time,duration):
        y = 0 if color == Color.WHITE else 7
        rook = self.get_piece_at((0,y))
        king = self.get_piece_at((4,y)) 
        king.make_move((2,y),time            ,duration*.5)
        rook.make_move((3,y),time+duration*.5,duration*.5)

    def get_can_execute(self,move,color):
        for piece in self.pieces:
            if piece.can_execute(move) and piece.color == color:
                return piece
        
    def get_piece_at(self,position):
        for piece in self.pieces:
            if piece.position == position and not piece.taken:
                return piece

    def get_spines_string(self):
        out = ""
        for piece in self.pieces:
            out += "\n" + piece.buffer_to_string()
        return out