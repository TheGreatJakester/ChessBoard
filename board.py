from piece import Pawn, Color

class Board:
    pieces = []
    def __init__(self):
        #make pawns
        for i in range(8):
            self.pieces.append(Pawn((i,1),Color.WHITE,self))
            self.pieces.append(Pawn((i,6),Color.BLACK,self))
        #make white pieces
        
        #make black pieces