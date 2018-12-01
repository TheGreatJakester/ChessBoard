#declare bishop = merge {
        sphere {<0,0,0>,0.25 scale <1,0.6,1> translate <0,5.82,0> }
        difference {
                sphere {<0,0,0>,1 scale <0.85,1,0.85> translate <0,4.75,0> }
                box {<-1,0,-1>, <1,0.1,1> scale 1 rotate <0,90,-63> translate <-0.55,5.6,0>}
        }
        torus { 0.63,0.05 scale 1 translate <0,3.95,0> }
        torus { 0.75,0.08 scale 1 translate <0,3.71,0> }
        torus { 0.85,0.15 scale 1 translate <0,3.5,0> } 
        cone { <0,0,0>,0.6, <0,0.65,0>,0.6 scale 1 translate <0,3.35,0> }
        lathe{
                quadratic_spline
                4,
                <0.75,2.25>,
                <0.5,1.5>,
                <0.5,0.75>,
                <0.75,0>
                scale <1.1,1.35,1.1>
                translate <0,1.4,0>
        }
        lathe{
                cubic_spline
                6,
                <0,1.25>,
                <0.6,1.15>,
                <0.65,0.85>,
                <1,0.5>,
                <1,0.15>,
                <0.25,0>
                scale <1.4,1.1,1.4>
                translate <0,0.15,0>
        }
        cone { <0,0.25,0>,1.45, <0,0.3,0>,1.45 scale 1 rotate 0 translate <0,0,0> }
        cone { <0,0,0>,1.5, <0,0.25,0>,1.5 scale 1 rotate 0 translate <0,0,0> }
        texture { NBwinebottle }
}


#declare bishop = object{bishop scale 0.5}