
//This is a really basic board, the board will be more complicated in the future, but for now this works. -Jake
//I will make sure that the dimentions on future boards will the same as this one -Jake
#include "splines/music_splines.inc"

#declare orb = union{
        sphere{
                <0,0,0> .25
        }
        sphere{
                <0,0,0> .2
        }
}

#declare board = union{
        //boarder of the board
        difference{
                box{
                        <-.5,.5,-.5>
                        <16.5,0,16.5>
                        texture{pigment{color Brown}}
                }
                box{
                        <0,-0.1,0>
                        <16,.51,16>  
                }
        
        }
        
        //square inside
