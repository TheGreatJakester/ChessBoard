#macro makeKnight(colorValue)

union { 
//base of knight 
cone {
<0,0,0> 1.25
<0,0+0.5,0> 1.25
texture {colorValue}
} 

torus{
1,0.30
texture {colorValue}
translate <0,0+0.5,0>
}

cone {
<0,0+0.5,0> 1
<0,0+1,0> 1
texture {colorValue}
}

//spine of knight
prism {
0-1,
0+1,
3,
<0-1,-0-3.70>, <0-1,-0-1>, <0+1,-0-1> //point 1, 2, 3
rotate x*90
texture {colorValue} 
}

//head of knight
difference{
difference{
prism {
0-1,
0+1,
3,
<0-1,-0-3.70>, <0-0.95,-0-2>, <0+0.25, -0-3.70>
rotate x*90
texture {colorValue}
}
//(eye1)
sphere{ 
<0-0.20,0+3.40,0-1.1>, 0.20
texture {colorValue}
}
}
//(eye2)
sphere{
<0-0.20,0+3.40,0+1.1>, 0.20
texture {colorValue}
}
}

//mouth of knight
difference{
difference{
box{
<0+0.25,0+3.70,0+1> 
<0-0.5,0+2.95,0-1>  
texture {colorValue}
}
//(eye1)
sphere{ 
<0-0.20,0+3.40,0-1.1>, 0.20
texture {colorValue}
}
//(eye2)
sphere{
<0-0.20,0+3.40,0+1.1>, 0.20
texture {colorValue}
}
}
}
difference{
difference{
difference{ 
cone{
<0+0.25,0+3.325,0-1>, 0.375
<0+0.25,0+3.325,0+1>, 0.375
texture {colorValue}
}
//(eye1)
sphere{ 
<0-0.20,0+3.40,0-1.1>, 0.20
texture {colorValue}
}
//(eye2)
sphere{
<0-0.20,0+3.40,0+1.1>, 0.20
texture {colorValue}
}
}
}
box{
<0+0.25,0+4,0+1> 
<0-1,0+1,0-1>
texture {colorValue}
}
}

//ears of knight
prism {
0-1
0-0.4,
3,
<0-0.65,-0-4.25>, <0-1,-0-3.70>, <0-0.50,-0-3.70> //point 1, 2, 3
rotate x*90
texture {colorValue} 
}
prism {
0+1,
0+0.4,
3,
<0-0.65,-0-4.25>, <0-1,-0-3.70>, <0-0.50,-0-3.70> //point 1, 2, 3
rotate x*90
texture {colorValue} 
}

}
#end