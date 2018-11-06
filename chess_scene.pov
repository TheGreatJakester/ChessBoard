#include "king.inc"
#include "rook.inc"
#include "board.inc"
#include "colors.inc"

#include "colors.inc"
// Comment this out
camera{
        location< 0, 4, -5 >
        look_at< 4, 0, 4 >
}
 
light_source{
        < 0, 50, 0 >
        color White
} 

light_source{
        < 0, 1, -5 >
        color White
}

#declare pawn = union{
    sphere{
        <0,1,0> .8
        texture{pigment{color White}}
    }
}

object{ king translate WKing(clock)}
object{ pawn translate BPawn3(clock)}