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
#declare kingX = 0;
#declare kingY = 0;
#declare kingZ = 0;
#declare kingColor = Green;

declare king = merge { 

        // Base
        cone {
                < kingX, kingY + .01, kingZ >, .75 
                < kingX, kingY +  .1975, kingZ >, .75 
                pigment { kingColor }
        } 
        
        torus {
                .55, .2 
                pigment { kingColor }
                translate < kingX, kingY + .35, kingZ >  
        
        }

        difference {         
                cone {
                        < kingX, kingY + .3, kingZ >, .7 
                        < kingX, kingY + .8, kingZ >, .6 
                        pigment { kingColor }
                } 
                 
                torus {
                        
                        .8, .2 
                        pigment { kingColor }
                        translate < kingX, kingY + .7, kingZ >  
                }
        } 
        
        // Shaft
        difference {         
                cone {
                        < kingX, kingY + .8, kingZ >, .6 
                        < kingX, kingY + 1.9, kingZ >, .35 
                        pigment { kingColor }
                } 
                 
                torus {
                        1.45, 1.16
                        pigment { kingColor }
                        translate < kingX, kingY + 1.4, kingZ >  
        
                } 

        }
        
        // Head
        torus {
                .35, .1 
                pigment { kingColor }
                translate < kingX, kingY + 1.9, kingZ >  
        
        }
        
        cone {
                < kingX, kingY + 2, kingZ >, .4 
                < kingX, kingY + 2.05, kingZ >, .4 
                pigment { kingColor }
        } 
        
        cone {
                < kingX, kingY + 2.05, kingZ >, .35 
                < kingX, kingY + 2.1, kingZ >, .35 
                pigment { kingColor }
        }

        cone {
                < kingX, kingY + 2.1, kingZ >, .375 
                < kingX, kingY + 2.15, kingZ >, .375 
                pigment { kingColor }
        }  
         
        cone {
                < kingX, kingY + 2.15, kingZ >, .35 
                < kingX, kingY + 2.6, kingZ >, .5 
                pigment { kingColor }
        }
        
        cone {
                < kingX, kingY + 2.6, kingZ >, .5 
                < kingX, kingY + 2.75, kingZ >, .375 
                pigment { kingColor }
        }
        
        cone {
                < kingX, kingY + 2.75, kingZ >, .25 
                < kingX, kingY + 2.8, kingZ >, .25 
                pigment { kingColor }
        } 
        
        // Crown
        difference { 
                union{
                        cone {
                                < kingX, kingY + 2.8, kingZ >, .2 
                                < kingX, kingY + 2.9, kingZ >, .25 
                                pigment { kingColor }
                        } 
                        
                        cone {
                                < kingX, kingY + 2.9, kingZ >, .25 
                                < kingX, kingY + 3, kingZ >, .2 
                                pigment { kingColor }
                        }

                        box { 
                                < kingX - .25, kingY + 3, kingZ - .2 >,  
                                < kingX + .25, kingY + 3.2, kingZ + .2 >  
                                pigment { kingColor }      
                        }

                        sphere {
                                < kingX, kingY + 3.3, kingZ >, .2
                                pigment { kingColor } 
                        }
                } 
                
                box {
                        < kingX - .5, kingY + 2.8, kingZ - .3 >,  
                        < kingX + .5, kingY + 4, kingZ - .1 >   
                         pigment { kingColor }
                }

                box { 
                        < kingX - .5, kingY + 2.8, kingZ + .1 >,  
                        < kingX + .5, kingY + 4, kingZ + .3 >     
                         pigment { kingColor }
                }
        }
}        

// Comment this out        
object{king}
