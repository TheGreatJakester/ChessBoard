#macro makeQueen(kingColor)
merge { 

        // Base
        cone {
                < 0, 0 + .01, 0 >, .75 
                < 0, 0 +  .1975, 0 >, .75 
                texture { kingColor }
        } 
        
        torus {
                .55, .2 
                texture { kingColor }
                translate < 0, 0 + .35, 0 >  
        
        }

        difference {         
                cone {
                        < 0, 0 + .3, 0 >, .7 
                        < 0, 0 + .8, 0 >, .6 
                        texture { kingColor }
                } 
                 
                torus {
                        
                        .8, .2 
                        texture { kingColor }
                        translate < 0, 0 + .7, 0 >  
                }
        } 
        
        // Shaft
        difference {         
                cone {
                        < 0, 0 + .8, 0 >, .6 
                        < 0, 0 + 1.9, 0 >, .35 
                        texture { kingColor }
                } 
                 
                torus {
                        1.45, 1.16
                        texture { kingColor }
                        translate < 0, 0 + 1.4, 0 >  
        
                } 

        }
        
        // Head
        // Head
        torus {
                .35, .1 
                texture { kingColor }
                translate < 0, 0 + 1.9, 0 >  
        
        }
        
        cone {
                < 0, 0 + 2, 0 >, .4 
                < 0, 0 + 2.05, 0 >, .4 
                texture { kingColor }
        } 
        
        cone {
                < 0, 0 + 2.05, 0 >, .35 
                < 0, 0 + 2.1, 0 >, .35 
                texture { kingColor }
        }

        cone {
                < 0, 0 + 2.1, 0 >, .375 
                < 0, 0 + 2.15, 0 >, .375 
                texture { kingColor }
        }  
         
        cone {
                < 0, 0 + 2.15, 0 >, .35 
                < 0, 0 + 2.6, 0 >, .5 
                texture { kingColor }
        }
        
        cone {
                < 0, 0 + 2.6, 0 >, .5 
                < 0, 0 + 2.75, 0 >, .375 
                texture { kingColor }
        }
        
        cone {
                < 0, 0 + 2.75, 0 >, .25 
                < 0, 0 + 2.8, 0 >, .25 
                texture { kingColor }
        } 
        
        // Crown
        sphere{
            <0,3,0> .35
            texture{kingColor}
        }
}        
#end