#include "colors.inc"

camera{
        location<1,5,-5>
        look_at<1,3,0>
}
 
light_source{
        <0,50,0>
        color White
} 

light_source{
        <0,1,-5>
        color White
}

declare king = union {
        // Base
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
                        <1, 1.3, 1>, .6 
                        pigment { Green }
                } 
                 
                torus {
                        
                        .8, .2 
                        pigment { Green }
                        translate <1,1.2,1>  
                }
        } 
        //Shaft
        difference {         
                cone {
                        <1, 1.3, 1>, .6 
                        <1, 2.4, 1>, .35 
                        pigment { Green }
                } 
                 
                torus {
                        1, .7 
                        pigment { Green }
                        translate <1,2.1,1>  
        
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
        }
        // Head
        torus {
                .35, .1 
                pigment { Green }
                translate <1,2.4,1>  
        
        }
        
        cone {
                <1, 2.5, 1>, .4 
                <1, 2.55, 1>, .4 
                pigment { Green }
        } 
        
        cone {
                <1, 2.55, 1>, .35 
                <1, 2.6, 1>, .35 
                pigment { Green }
        }
        cone {
                <1, 2.6, 1>, .375 
                <1, 2.65, 1>, .375 
                pigment { Green }
        }  
         
        cone {
                <1, 2.65, 1>, .35 
                <1, 3.1, 1>, .5 
                pigment { Green }
        }
        
        cone {
                <1, 3.1, 1>, .5 
                <1, 3.25, 1>, .375 
                pigment { Green }
        }
        
        cone {
                <1, 3.25, 1>, .25 
                <1, 3.3, 1>, .25 
                pigment { Green }
        } 
        // Crown
        difference { 
                union{
                        cone {
                                <1, 3.3, 1>, .2 
                                <1, 3.4, 1>, .25 
                                pigment { Green }
                        } 
                        cone {
                                <1, 3.4, 1>, .25 
                                <1, 3.5, 1>, .2 
                                pigment { Green }
                        }
                        box { 
                                <0.75, 3.5, .8>,  
                                <1.25, 3.7, 1.2>  
                                pigment { Green }      
                        }
                        sphere {
                                < 1, 3.8, 1 >, .2
                                pigment { Green } 
                        }
                } 
                
                box {
                        <0.5, 3.3, .7>,  
                        <1.5, 4.5, .9>   
                         pigment { Green }
                }
                box { 
                        <0.5, 3.3, 1.1>,  
                        <1.5, 4.5, 1.3>     
                         pigment { Green }
                }
        }
}        
        
object{king}
