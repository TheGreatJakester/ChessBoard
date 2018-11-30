#declare pawnColor = Green;

#declare pawn = merge {

        // Base
        cone {
                < 0, 0 + .01, 0 >, .75 
                < 0, 0 + .1975, 0 >, .75 

        } 
        
        torus {
                .55, .2 

                translate < 0, 0 + .35, 0 >  
        
        }
        
        difference {
                cone {
                        < 0, 0 + .3, 0 >, .7 
                        < 0, 0 + .7, 0 >, .6 

                } 
                
                torus {
                        .75, .15 

                        translate < 0, 0 + .6, 0 > 
        
                }
        }  
        
        // Shaft
        difference {
                cone {
                        < 0, 0 + .7, 0 >, .5
                        < 0, 0 + 1.7, 0 >, .3 

                } 
                               
                torus {
                        1.45, 1.16

                        translate < 0, 0 + 1.3, 0 >  
        
                }     
                
        }

        //head
        sphere {
                <0,2,0> .5

        }
}

// Comment this out
