#macro makeBishop(bishopTexture)
merge {
        // Base
        cone {
                < 0, 0 + .01, 0 >, .75 
                < 0, 0 + .1975, 0 >, .75 
                texture { bishopTexture }
        } 
        
        torus {
                .55, .2 
                texture { bishopTexture }
                translate < 0, 0 + .35, 0 >  
        
        }

        // Head
        sphere{
            < 0, 2, 0 >, .45
            texture { bishopTexture }
        }
        
        difference {
                cone {
                        < 0, 0 + .3, 0 >, .7 
                        < 0, 0 + .7, 0 >, .6 
                        texture { bishopTexture }
                } 
                
                torus {
                        .75, .15 
                        texture { bishopTexture }
                        translate < 0, 0 + .6, 0 > 
        
                }
        }  
        
        // Shaft
        difference {
                cone {
                        < 0, 0 + .7, 0 >, .5
                        < 0, 0 + 1.7, 0 >, .3 
                        texture { bishopTexture }
                } 
                               
                torus {
                        1.45, 1.16
                        texture { bishopTexture }
                        translate < 0, 0 + 1.3, 0 >  
        
                }     
                
        }
}
#end
