#include "king.inc"
#include "rook.inc"
#include "board.inc"
#include "colors.inc"
#include "pieces_splines.inc"
#include "KnightDemo.inc"
#include "pawn.inc"
#include "bishop.inc"
#include "queen.inc"

camera{
        location<10, 10 , -10 >
        look_at< 8, 0, 8 >
}
 
light_source{
        < 0, 50, 0 >
        color White
} 

light_source{
        < 0, 1, -5 >
        color White
}

#declare whitePiecePigment = pigment{color rgb<.5,.45,.45>}
#declare blackPiecePigment = pigment{color rgb<.1, .05,.05>}

#declare whitePawn = makePawn(whitePiecePigment)
#declare blackPawn = makePawn(blackPiecePigment)

#declare whiteRook = makeRook(whitePiecePigment)
#declare blackRook = makeRook(blackPiecePigment)

#declare whiteBishop = makeBishop(whitePiecePigment)
#declare blackBishop = makeBishop(blackPiecePigment)

#declare whiteKing = makeKing(whitePiecePigment)
#declare blackKing = makeKing(blackPiecePigment)

#declare whiteQueen = makeQueen(whitePiecePigment)
#declare blackQueen = makeQueen(blackPiecePigment)


//knights need to be rescaled
#declare whiteKnight = makeKnight(whitePiecePigment)
#declare whiteKnight = object{whiteKnight scale .5}

#declare blackKnight = makeKnight(blackPiecePigment)
#declare blackKnight = object{blackKnight scale .5}



object{ board translate <0,-.5,0>}

object{ whiteKing translate WKing(clock)}
object{ blackKing translate BKing(clock)}

object{ whiteQueen translate WQueen(clock)}
object{ blackQueen translate BQueen(clock)}

object{ blackKnight translate BKnight1(clock)}
object{ blackKnight translate BKnight2(clock)}
object{ whiteKnight translate WKnight1(clock)}
object{ whiteKnight translate WKnight2(clock)}

object{ blackRook translate BRook1(clock)}
object{ blackRook translate BRook2(clock)}
object{ whiteRook translate WRook1(clock)}
object{ whiteRook translate WRook2(clock)}

object{ blackBishop translate BBishop1(clock)}
object{ blackBishop translate BBishop2(clock)}
object{ whiteBishop translate WBishop1(clock)}
object{ whiteBishop translate WBishop2(clock)}

object{ blackPawn translate BPawn0(clock)}
object{ blackPawn translate BPawn1(clock)}
object{ blackPawn translate BPawn2(clock)}
object{ blackPawn translate BPawn3(clock)}
object{ blackPawn translate BPawn4(clock)}
object{ blackPawn translate BPawn5(clock)}
object{ blackPawn translate BPawn6(clock)}
object{ blackPawn translate BPawn7(clock)}

object{ whitePawn translate WPawn0(clock)}
object{ whitePawn translate WPawn1(clock)}
object{ whitePawn translate WPawn2(clock)}
object{ whitePawn translate WPawn3(clock)}
object{ whitePawn translate WPawn4(clock)}
object{ whitePawn translate WPawn5(clock)}
object{ whitePawn translate WPawn6(clock)}
object{ whitePawn translate WPawn7(clock)}
