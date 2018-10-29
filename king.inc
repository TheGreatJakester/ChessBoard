#include "colors.inc"

camera{
        location<7,5,-5>
        look_at<7,3,0>
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
                <7, .51, 1>, .75 
                <7, .6975, 1>, .75 
                pigment { Green }
        } 
        
        torus {
                .55, .2 
                pigment { Green }
                translate <7,.85,1>  
        
        }
        difference {         
                cone {
                        <7, .8, 1>, .7 
                        <7, 1.3, 1>, .6 
                        pigment { Green }
                } 
                 
                torus {
                        
                        .8, .2 
                        pigment { Green }
                        translate <7,1.2,1>  
                }
        } 
        //Shaft
        difference {         
                cone {
                        <7, 1.3, 1>, .6 
                        <7, 2.4, 1>, .35 
                        pigment { Green }
                } 
                 
                torus {
                        1, .7 
                        pigment { Green }
                        translate <7,2.1,1>  
        
                } 
                
                torus {
                        1, .7 
                        pigment { Green }
                        translate <7,2,1>  
        
                } 
                
                torus {
                        1, .7 
                        pigment { Green }
                        translate <7,1.9,1>  
        
                } 
                torus {
                        1, .7 
                        pigment { Green }
                        translate <7,1.8,1>  
        
                }
        }
        // Head
        torus {
                .35, .1 
                pigment { Green }
                translate <7,2.4,1>  
        
        }
        
        cone {
                <7, 2.5, 1>, .4 
                <7, 2.55, 1>, .4 
                pigment { Green }
        } 
        
        cone {
                <7, 2.55, 1>, .35 
                <7, 2.6, 1>, .35 
                pigment { Green }
        }
        cone {
                <7, 2.6, 1>, .375 
                <7, 2.65, 1>, .375 
                pigment { Green }
        }  
         
        cone {
                <7, 2.65, 1>, .35 
                <7, 3.1, 1>, .5 
                pigment { Green }
        }
        
        cone {
                <7, 3.1, 1>, .5 
                <7, 3.25, 1>, .375 
                pigment { Green }
        }
        
        cone {
                <7, 3.25, 1>, .25 
                <7, 3.3, 1>, .25 
                pigment { Green }
        } 
        // Crown
        difference { 
                union{
                        cone {
                                <7, 3.3, 1>, .2 
                                <7, 3.4, 1>, .25 
                                pigment { Green }
                        } 
                        cone {
                                <7, 3.4, 1>, .25 
                                <7, 3.5, 1>, .2 
                                pigment { Green }
                        }
                        box { 
                                <6.75, 3.5, .8>,  
                                <7.25, 3.7, 1.2>  
                                pigment { Green }      
                        }
                        sphere {
                                < 7, 3.8, 1 >, .2
                                pigment { Green } 
                        }
                } 
                
                box {
                        <6.5, 3.3, .7>,  
                        <7.5, 4.5, .9>   
                         pigment { Green }
                }
                box { 
                        <6.5, 3.3, 1.1>,  
                        <7.5, 4.5, 1.3>     
                         pigment { Green }
                }
        }
}        
        
object{king}