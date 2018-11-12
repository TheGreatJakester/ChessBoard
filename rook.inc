#macro makeRook(rookColor)
merge {
        // Base
        cone {
                < 0, 0 + .01, 0 >, .75 
                < 0, 0 + .1975, 0 >, .75 
                texture { rookColor }
        } 
        
        torus {
                .55, .2 
                texture { rookColor }
                translate < 0, 0 + .35, 0 >  
        
        }
        
        difference {
                cone {
                        < 0, 0 + .3, 0 >, .7 
                        < 0, 0 + .7, 0 >, .6 
                        texture { rookColor }
                } 
                
                torus {
                        .75, .15 
                        texture { rookColor }
                        translate < 0, 0 + .6, 0 > 
        
                }
        }  
        
        // Shaft
        difference {
                cone {
                        < 0, 0 + .7, 0 >, .5
                        < 0, 0 + 1.7, 0 >, .3 
                        texture { rookColor }
                } 
                               
                torus {
                        1.45, 1.16
                        texture { rookColor }
                        translate < 0, 0 + 1.3, 0 >  
        
                }     
                
        }
         
        // Head
        cone {
                < 0, 0 + 1.6, 0 >, .35
                < 0, 0 + 1.7, 0 >, .35 
                texture { rookColor }
        } 
        
        cone {
                < 0, 0 + 1.7, 0 >, .5
                < 0, 0 + 1.75, 0 >, .5 
                texture { rookColor }
        } 
        
        cone {
                < 0, 0 + 1.7, 0 >, .5
                < 0, 0 + 1.775, 0 >, .475 
                texture { rookColor }
        } 
        
        difference {
                cone {
                        < 0, 0 + 1.8, 0 >, .5
                        < 0, 0 + 2.25, 0 >, .5 
                        texture { rookColor }
                }  
                
                cone {
                        < 0, 0 + 1.9, 0 >, .4 
                        < 0, 0 + 2.3, 0 >, .4 
                }

                box {
                        < 0 - .05, 0 + 2.1, 0 - 1 >,  
                        < 0 + .05, 0 + 2.4, 0 + 1 >   
                }

                box { 
                        < 0 - 1, 0 + 2.1, 0 - .05 >,  
                        < 0 + 1, 0 + 2.4, 0 + .05 >    
                }
        }
}
#end
