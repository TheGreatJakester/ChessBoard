#include "colors.inc"
// Comment this out
camera{
        location< 0, 2, -5 >
        look_at< 0, 2, 0 >
}
 
light_source{
        < 0, 50, 0 >
        color White
} 

light_source{
        < 0, 1, -5 >
        color White
} 

// Start here
#declare pawnColor = Green;

#declare pawn = merge {

        // Base
        cone {
                < 0, 0 + .01, 0 >, .75 
                < 0, 0 + .1975, 0 >, .75 
                pigment { pawnColor }
        } 
        
        torus {
                .55, .2 
                pigment { pawnColor }
                translate < 0, 0 + .35, 0 >  
        
        }
        
        difference {
                cone {
                        < 0, 0 + .3, 0 >, .7 
                        < 0, 0 + .7, 0 >, .6 
                        pigment { pawnColor }
                } 
                
                torus {
                        .75, .15 
                        pigment { pawnColor }
                        translate < 0, 0 + .6, 0 > 
        
                }
        }  
        
        // Shaft
        difference {
                cone {
                        < 0, 0 + .7, 0 >, .5
                        < 0, 0 + 1.7, 0 >, .3 
                        pigment { pawnColor }
                } 
                               
                torus {
                        1.45, 1.16
                        pigment { pawnColor }
                        translate < 0, 0 + 1.3, 0 >  
        
                }     
                
        }

        //head
        sphere {
                <0,2,0> .5
                pigment { pawnColor }
        }
}

// Comment this out
object{pawn}

