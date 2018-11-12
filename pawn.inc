#macro  makePawn(te) 
    union{
        cone{
            <0,0,0> .5
            <0,1,0> 0
            texture{ te }
        }
        sphere{
            <0,1,0> .25
            texture{ te }
        }
    }
#end