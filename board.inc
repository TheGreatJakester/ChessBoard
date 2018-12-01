
//This is a really basic board, the board will be more complicated in the future, but for now this works. -Jake
//I will make sure that the dimentions on future boards will the same as this one -Jake
#declare board = union{
        //border of the board
        difference{
                box{
                        <-1,.5,-1>
                        <17,0,17>
                        texture{pigment{color Silver filter 0.7}}
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
                Silver
                #else
                Brown
                #end
                filter 0.7
                }}
                        
                
        }
        
        #local j = j + 1;
        #end
        #local i = i + 1;
        #end

}