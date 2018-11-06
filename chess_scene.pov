#include "king.inc"
#include "rook.inc"
#include "board.inc"
#include "colors.inc"
#include "pieces_splines.inc"

camera{
        location<8, 5 , -10 >
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

#declare pawn = union{
    sphere{
        <0,1,0> .4
        texture{pigment{color White}}
    }
}
#declare knight = union{
        box{
                <-.5,0,-.5> <.5,1,.5>
                texture{pigment{color Red}}
        }
}

object{ board translate <0,-.5,0>}

object{ king translate WKing(clock)}

object{ knight translate BKnight1(clock)}
object{ knight translate BKnight2(clock)}
object{ knight translate WKnight1(clock)}
object{ knight translate WKnight2(clock)}


object{ pawn translate BPawn0(clock)}
object{ pawn translate BPawn1(clock)}
object{ pawn translate BPawn2(clock)}
object{ pawn translate BPawn3(clock)}
object{ pawn translate BPawn4(clock)}
object{ pawn translate BPawn5(clock)}
object{ pawn translate BPawn6(clock)}
object{ pawn translate BPawn7(clock)}

object{ pawn translate WPawn0(clock)}
object{ pawn translate WPawn1(clock)}
object{ pawn translate WPawn2(clock)}
object{ pawn translate WPawn3(clock)}
object{ pawn translate WPawn4(clock)}
object{ pawn translate WPawn5(clock)}
object{ pawn translate WPawn6(clock)}
object{ pawn translate WPawn7(clock)}
