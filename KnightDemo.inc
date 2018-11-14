
#include "colors.inc" 
 
//background{White}
camera {
location <0, 4, -5>
look_at <0, 2, 0> 
}
light_source { <20, 20, -20> color White }
light_source { <20, -20, 20> color White }
light_source { <-20, 20, 20> color White } 


// knight coordinates and color
#declare xValue = 0;
#declare yValue = 0;  
#declare zValue = 0;
#declare colorValue = Green;





#declare knight = union {
 
//base of knight 
cone {
<xValue,yValue,zValue> 1.25
<xValue,yValue+0.5,zValue> 1.25
pigment {colorValue}
} 

torus{
1,0.30
pigment {colorValue}
translate <xValue,yValue+0.5,zValue>
}

cone {
<xValue,yValue+0.5,zValue> 1
<xValue,yValue+1,zValue> 1
pigment {colorValue}
}

//spine of knight
prism {
zValue-1,
zValue+1,
3,
<xValue-1,-yValue-3.70>, <xValue-1,-yValue-1>, <xValue+1,-yValue-1> //point 1, 2, 3
rotate x*90
pigment {colorValue} 
}

//head of knight
difference{
difference{
prism {
zValue-1,
zValue+1,
3,
<xValue-1,-yValue-3.70>, <xValue-0.95,-yValue-2>, <xValue+0.25, -yValue-3.70>
rotate x*90
pigment {colorValue}
}
//(eye1)
sphere{ 
<xValue-0.20,yValue+3.40,zValue-1.1>, 0.20
pigment {colorValue}
}
}
//(eye2)
sphere{
<xValue-0.20,yValue+3.40,zValue+1.1>, 0.20
pigment {colorValue}
}
}

//mouth of knight
difference{
difference{
box{
<xValue+0.25,yValue+3.70,zValue+1> 
<xValue-0.5,yValue+2.95,zValue-1>  
pigment {colorValue}
}
//(eye1)
sphere{ 
<xValue-0.20,yValue+3.40,zValue-1.1>, 0.20
pigment {colorValue}
}
//(eye2)
sphere{
<xValue-0.20,yValue+3.40,zValue+1.1>, 0.20
pigment {colorValue}
}
}
}
difference{
difference{
difference{ 
cone{
<xValue+0.25,yValue+3.325,zValue-1>, 0.375
<xValue+0.25,yValue+3.325,zValue+1>, 0.375
pigment {colorValue}
}
//(eye1)
sphere{ 
<xValue-0.20,yValue+3.40,zValue-1.1>, 0.20
pigment {colorValue}
}
//(eye2)
sphere{
<xValue-0.20,yValue+3.40,zValue+1.1>, 0.20
pigment {colorValue}
}
}
}
box{
<xValue+0.25,yValue+4,zValue+1> 
<xValue-1,yValue+1,zValue-1>
pigment {colorValue}
}
}

//ears of knight
prism {
zValue-1
zValue-0.4,
3,
<xValue-0.65,-yValue-4.25>, <xValue-1,-yValue-3.70>, <xValue-0.50,-yValue-3.70> //point 1, 2, 3
rotate x*90
pigment {colorValue} 
}
prism {
zValue+1,
zValue+0.4,
3,
<xValue-0.65,-yValue-4.25>, <xValue-1,-yValue-3.70>, <xValue-0.50,-yValue-3.70> //point 1, 2, 3
rotate x*90
pigment {colorValue} 
}

} 

  
  
   
object { knight rotate y*270 } 


