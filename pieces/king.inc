
#declare kingX = 0;
#declare kingY = 0;
#declare kingZ = 0;

declare king = merge { 

        // Base
        cone {
                < kingX, kingY + .01, kingZ >, .75 
                < kingX, kingY +  .1975, kingZ >, .75 
        } 
        torus {
                .55, .2 
                translate < kingX, kingY + .35, kingZ >  
        }
        difference {         
                cone {
                        < kingX, kingY + .3, kingZ >, .7 
                        < kingX, kingY + .8, kingZ >, .6 
                } 
                torus {
                        .8, .2 
                        translate < kingX, kingY + .7, kingZ >  
                }
        } 
        
        // Shaft
        difference {         
                cone {
                        < kingX, kingY + .8, kingZ >, .6 
                        < kingX, kingY + 2, kingZ >, .35 
                } 
                torus {
                        1.45, 1.16
                        translate < kingX, kingY + 1.5, kingZ >  
                } 
        }
        
        // Head
        torus {
                .35, .1 
                translate < kingX, kingY + 2, kingZ >  
        }
        cone {
                < kingX, kingY + 2.1, kingZ >, .4 
                < kingX, kingY + 2.15, kingZ >, .4 
        } 
        cone {
                < kingX, kingY + 2.15, kingZ >, .35 
                < kingX, kingY + 2.2, kingZ >, .35 
        }
        cone {
                < kingX, kingY + 2.2, kingZ >, .375 
                < kingX, kingY + 2.25, kingZ >, .375 
        }  
        cone {
                < kingX, kingY + 2.25, kingZ >, .35 
                < kingX, kingY + 2.75, kingZ >, .5 
        }
        cone {
                < kingX, kingY + 2.75, kingZ >, .5 
                < kingX, kingY + 2.85, kingZ >, .375 
        }
        cone {
                < kingX, kingY + 2.85, kingZ >, .25 
                < kingX, kingY + 2.9, kingZ >, .25 
        } 
        
        // Crown
        difference { 
                union{
                        cone {
                                < kingX, kingY + 2.9, kingZ >, .2 
                                < kingX, kingY + 3, kingZ >, .25 
                        } 
                        cone {
                                < kingX, kingY + 3, kingZ >, .25 
                                < kingX, kingY + 3.1, kingZ >, .2 
                        }
                        box { 
                                < kingX - .25, kingY + 3.1, kingZ - .2 >,  
                                < kingX + .25, kingY + 3.25, kingZ + .2 >  
                        }
                        sphere {
                                < kingX, kingY + 3.3, kingZ >, .2
                        }
                } 
                box {
                        < kingX - .5, kingY + 2.9, kingZ - .3 >,  
                        < kingX + .5, kingY + 4, kingZ - .1 >   
                }
                box { 
                        < kingX - .5, kingY + 2.9, kingZ + .1 >,  
                        < kingX + .5, kingY + 4, kingZ + .3 >     
                }
        }
}        
        