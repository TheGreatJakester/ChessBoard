
// knight coordinates
#declare xValue = 0;
#declare yValue = 0;  
#declare zValue = 0;


#declare knight = merge {
 
//base of knight 
cone {
<xValue,yValue,zValue> 1.25
<xValue,yValue+0.5,zValue> 1.25

} 

torus{
1,0.30

translate <xValue,yValue+0.5,zValue>
}

cone {
<xValue,yValue+0.5,zValue> 1
<xValue,yValue+1,zValue> 1

}

//spine of knight
prism {
zValue-1,
zValue+1,
3,
<xValue-1,-yValue-3.70>, <xValue-1,-yValue-1>, <xValue+1,-yValue-1> //point 1, 2, 3
rotate x*90

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

}
//(eye1)
sphere{ 
<xValue-0.20,yValue+3.40,zValue-1.1>, 0.20

}
}
//(eye2)
sphere{
<xValue-0.20,yValue+3.40,zValue+1.1>, 0.20

}
}

//mouth of knight
difference{
difference{
box{
<xValue+0.25,yValue+3.70,zValue+1> 
<xValue-0.5,yValue+2.95,zValue-1>  

}
//(eye1)
sphere{ 
<xValue-0.20,yValue+3.40,zValue-1.1>, 0.20

}
//(eye2)
sphere{
<xValue-0.20,yValue+3.40,zValue+1.1>, 0.20

}
}
}
difference{
difference{
difference{ 
cone{
<xValue+0.25,yValue+3.325,zValue-1>, 0.375
<xValue+0.25,yValue+3.325,zValue+1>, 0.375

}
//(eye1)
sphere{ 
<xValue-0.20,yValue+3.40,zValue-1.1>, 0.20

}
//(eye2)
sphere{
<xValue-0.20,yValue+3.40,zValue+1.1>, 0.20

}
}
}
box{
<xValue+0.25,yValue+4,zValue+1> 
<xValue-1,yValue+1,zValue-1>

}
}

//ears of knight
prism {
zValue-1
zValue-0.4,
3,
<xValue-0.65,-yValue-4.25>, <xValue-1,-yValue-3.70>, <xValue-0.50,-yValue-3.70> //point 1, 2, 3
rotate x*90

}
prism {
zValue+1,
zValue+0.4,
3,
<xValue-0.65,-yValue-4.25>, <xValue-1,-yValue-3.70>, <xValue-0.50,-yValue-3.70> //point 1, 2, 3
rotate x*90

}

} 
 

#declare knight = object{knight scale <.5, .6, .5>}  

