//basic includes
#include "colors.inc"
//texture includes
#include "shapes.inc"
#include "textures.inc"
#include "stones.inc"
#include "glass.inc"
#include "metals.inc"

#declare white_piece_texture = Spun_Brass
#declare black_piece_texture = Brass_Valley

//piece includes
#include "pieces/pawn.inc"
#include "pieces/rook.inc"
#include "pieces/knight.inc"
#include "pieces/bishop.inc"
#include "pieces/queen.inc"
#include "pieces/king.inc"

//spline includes
#include "splines/pieces_splines.inc"
#include "splines/music_splines.inc"

//board include
#include "board.inc"

camera{
        location< 10, 20, -5 >
        look_at< 8, 2, 8 >
}
 
light_source{
        < 0, 50, 0 >
        color White
} 

object {board}

//white peices
object{ pawn translate WPawn0(clock) texture{white_piece_texture} }
object{ pawn translate WPawn1(clock) texture{white_piece_texture} }
object{ pawn translate WPawn2(clock) texture{white_piece_texture} }
object{ pawn translate WPawn3(clock) texture{white_piece_texture} }
object{ pawn translate WPawn4(clock) texture{white_piece_texture} }
object{ pawn translate WPawn5(clock) texture{white_piece_texture} }
object{ pawn translate WPawn6(clock) texture{white_piece_texture} }
object{ pawn translate WPawn7(clock) texture{white_piece_texture} }


object{ rook translate WRook1(clock) texture{white_piece_texture} }
object{ rook translate WRook2(clock) texture{white_piece_texture} }

object{ knight rotate <0,270,0> translate WKnight1(clock) texture{white_piece_texture} }
object{ knight rotate <0,270,0> translate WKnight2(clock) texture{white_piece_texture} }

object{ bishop translate WBishop1(clock) texture{white_piece_texture} }
object{ bishop translate WBishop2(clock) texture{white_piece_texture} }

object{ queen translate WQueen(clock) texture{white_piece_texture} }
object{ king translate WKing(clock) texture{white_piece_texture} }


object{ pawn translate BPawn0(clock) texture{black_piece_texture} }
object{ pawn translate BPawn1(clock) texture{black_piece_texture} }
object{ pawn translate BPawn2(clock) texture{black_piece_texture} }
object{ pawn translate BPawn3(clock) texture{black_piece_texture} }
object{ pawn translate BPawn4(clock) texture{black_piece_texture} }
object{ pawn translate BPawn5(clock) texture{black_piece_texture} }
object{ pawn translate BPawn6(clock) texture{black_piece_texture} }
object{ pawn translate BPawn7(clock) texture{black_piece_texture} }


object{ rook translate BRook1(clock) texture{black_piece_texture} }
object{ rook translate BRook2(clock) texture{black_piece_texture} }

object{ knight rotate <0,90,0> translate BKnight1(clock) texture{black_piece_texture} }
object{ knight rotate <0,90,0> translate BKnight2(clock) texture{black_piece_texture} }

object{ bishop translate BBishop1(clock) texture{black_piece_texture} }
object{ bishop translate BBishop2(clock) texture{black_piece_texture} }

object{ queen translate BQueen(clock) texture{black_piece_texture} }
object{ king translate BKing(clock) texture{black_piece_texture} }