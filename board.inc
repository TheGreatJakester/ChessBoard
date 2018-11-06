#include "colors.inc"


camera{
        location<0,30,-50>
        look_at<0,0,0>
}

light_source{
        <0,50,0>
        color White
}
//This is a really basic board, the board will be more complicated in the future, but for now this works. -Jake
//I will make sure that the dimentions on future boards will the same as this one -Jake
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
        
        #local i=0;
        #while(i<8)
        #local j=0;
        #while(j<8)
        box{
                <  j*2, 0,  i*2>
                <2+j*2,.5,2+i*2>
                texture{pigment{ color
                #if(mod(j+i,2) = 1)
                White
                #else
                Black
                #end
                }}
                        
                
        }
        
        #local j = j + 1;
        #end
        #local i = i + 1;
        #end
}