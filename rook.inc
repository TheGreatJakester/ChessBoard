#include "colors.inc"

camera{
        location<0,2,-8>
        look_at<0,0,0>
}
 
light_source{
        <0,50,0>
        color White
} 

light_source{
        <0,1,-5>
        color White
}

#declare rook = union {
        //Base
        cone {
                <1, .51, 1>, .75 
                <1, .6975, 1>, .75 
                pigment { Green }
        } 
        
        torus {
                .55, .2 
                pigment { Green }
                translate <1,.85,1>  
        
        }
        
        difference {
                cone {
                        <1, .8, 1>, .7 
                        <1, 1.2, 1>, .6 
                        pigment { Green }
                } 
                
                torus {
                        .75, .15 
                        pigment { Green }
                        translate <1,1.1,1> 
        
                }
        }  
        
        // Shaft
        difference {
                cone {
                        <1, 1.2, 1>, .5
                        <1, 2.2, 1>, .3 
                        pigment { Green }
                }
                          
                torus {
                        1, .7 
                        pigment { Green }
                        translate <1,2,1>  
        
                } 
                
                torus {
                        1, .7 
                        pigment { Green }
                        translate <1,1.9,1>  
        
                } 
                
                torus {
                        1, .7 
                        pigment { Green }
                        translate <1,1.8,1>  
        
                } 
                torus {
                        1, .7 
                        pigment { Green }
                        translate <1,1.7,1>  
        
                }      
                
        } 
        //Head
        cone {
                <1, 2.1, 1>, .35
                <1, 2.2, 1>, .35 
                pigment { Green }
        } 
        
        cone {
                <1, 2.2, 1>, .5
                <1, 2.25, 1>, .5 
                pigment { Green }
        } 
        
        cone {
                <1, 2.2, 1>, .5
                <1, 2.275, 1>, .475 
                pigment { Green }
        } 
        
        difference {
                cone {
                        <1, 2.3, 1>, .5
                        <1, 2.75, 1>, .5 
                        pigment { Green }
                }  
                
                cone {
                        <1, 2.4, 1>, .4 
                        <1, 2.8, 1>, .4 
                }
                box {
                        <.95, 2.6, 0>,  
                        <1.05, 2.9, 2>   
                }
                box { 
                        <0, 2.6, .95>,  
                        <2, 2.9, 1.05>    
                }
        }
}

object{rook}

