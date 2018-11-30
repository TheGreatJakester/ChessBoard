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
#declare rookX = 0;
#declare rookY = 0;
#declare rookZ = 0;
#declare rookColor = Green;

#declare rook = merge {

        // Base
        cone {
                < rookX, rookY + .01, rookZ >, .75 
                < rookX, rookY + .1975, rookZ >, .75 
                pigment { rookColor }
        } 
        
        torus {
                .55, .2 
                pigment { rookColor }
                translate < rookX, rookY + .35, rookZ >  
        
        }
        
        difference {
                cone {
                        < rookX, rookY + .3, rookZ >, .7 
                        < rookX, rookY + .7, rookZ >, .6 
                        pigment { rookColor }
                } 
                
                torus {
                        .75, .15 
                        pigment { rookColor }
                        translate < rookX, rookY + .6, rookZ > 
        
                }
        }  
        
        // Shaft
        difference {
                cone {
                        < rookX, rookY + .7, rookZ >, .5
                        < rookX, rookY + 1.7, rookZ >, .3 
                        pigment { rookColor }
                } 
                               
                torus {
                        1.45, 1.16
                        pigment { rookColor }
                        translate < rookX, rookY + 1.3, rookZ >  
        
                }     
                
        }
         
        // Head
        cone {
                < rookX, rookY + 1.6, rookZ >, .35
                < rookX, rookY + 1.7, rookZ >, .35 
                pigment { rookColor }
        } 
        
        cone {
                < rookX, rookY + 1.7, rookZ >, .5
                < rookX, rookY + 1.75, rookZ >, .5 
                pigment { rookColor }
        } 
        
        cone {
                < rookX, rookY + 1.7, rookZ >, .5
                < rookX, rookY + 1.775, rookZ >, .475 
                pigment { rookColor }
        } 
        
        difference {
                cone {
                        < rookX, rookY + 1.8, rookZ >, .5
                        < rookX, rookY + 2.25, rookZ >, .5 
                        pigment { rookColor }
                }  
                
                cone {
                        < rookX, rookY + 1.9, rookZ >, .4 
                        < rookX, rookY + 2.3, rookZ >, .4 
                }

                box {
                        < rookX - .05, rookY + 2.1, rookZ - 1 >,  
                        < rookX + .05, rookY + 2.4, rookZ + 1 >   
                }

                box { 
                        < rookX - 1, rookY + 2.1, rookZ - .05 >,  
                        < rookX + 1, rookY + 2.4, rookZ + .05 >    
                }
        }
}

// Comment this out
object{rook}

