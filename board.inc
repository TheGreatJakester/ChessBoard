
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
box{
	<0,0,0>
	<2,0.5,2>
	texture{pigment{color White filter .8}}
}
light_source{
	< 1.0, 0.25, 1.0 >
	color White
	fade_distance .5*vlength(freq0(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<0,0,2>
	<2,0.5,4>
	texture{pigment{color Black filter .8}}
}
light_source{
	< 1.0, 0.25, 3.0 >
	color White
	fade_distance .5*vlength(freq1(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<0,0,4>
	<2,0.5,6>
	texture{pigment{color White filter .8}}
}
light_source{
	< 1.0, 0.25, 5.0 >
	color White
	fade_distance .5*vlength(freq2(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<0,0,6>
	<2,0.5,8>
	texture{pigment{color Black filter .8}}
}
light_source{
	< 1.0, 0.25, 7.0 >
	color White
	fade_distance .5*vlength(freq3(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<0,0,8>
	<2,0.5,10>
	texture{pigment{color White filter .8}}
}
light_source{
	< 1.0, 0.25, 9.0 >
	color White
	fade_distance .5*vlength(freq4(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<0,0,10>
	<2,0.5,12>
	texture{pigment{color Black filter .8}}
}
light_source{
	< 1.0, 0.25, 11.0 >
	color White
	fade_distance .5*vlength(freq5(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<0,0,12>
	<2,0.5,14>
	texture{pigment{color White filter .8}}
}
light_source{
	< 1.0, 0.25, 13.0 >
	color White
	fade_distance .5*vlength(freq6(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<0,0,14>
	<2,0.5,16>
	texture{pigment{color Black filter .8}}
}
light_source{
	< 1.0, 0.25, 15.0 >
	color White
	fade_distance .5*vlength(freq7(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<2,0,0>
	<4,0.5,2>
	texture{pigment{color Black filter .8}}
}
light_source{
	< 3.0, 0.25, 1.0 >
	color White
	fade_distance .5*vlength(freq8(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<2,0,2>
	<4,0.5,4>
	texture{pigment{color White filter .8}}
}
light_source{
	< 3.0, 0.25, 3.0 >
	color White
	fade_distance .5*vlength(freq9(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<2,0,4>
	<4,0.5,6>
	texture{pigment{color Black filter .8}}
}
light_source{
	< 3.0, 0.25, 5.0 >
	color White
	fade_distance .5*vlength(freq10(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<2,0,6>
	<4,0.5,8>
	texture{pigment{color White filter .8}}
}
light_source{
	< 3.0, 0.25, 7.0 >
	color White
	fade_distance .5*vlength(freq11(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<2,0,8>
	<4,0.5,10>
	texture{pigment{color Black filter .8}}
}
light_source{
	< 3.0, 0.25, 9.0 >
	color White
	fade_distance .5*vlength(freq12(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<2,0,10>
	<4,0.5,12>
	texture{pigment{color White filter .8}}
}
light_source{
	< 3.0, 0.25, 11.0 >
	color White
	fade_distance .5*vlength(freq13(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<2,0,12>
	<4,0.5,14>
	texture{pigment{color Black filter .8}}
}
light_source{
	< 3.0, 0.25, 13.0 >
	color White
	fade_distance .5*vlength(freq14(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<2,0,14>
	<4,0.5,16>
	texture{pigment{color White filter .8}}
}
light_source{
	< 3.0, 0.25, 15.0 >
	color White
	fade_distance .5*vlength(freq15(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<4,0,0>
	<6,0.5,2>
	texture{pigment{color White filter .8}}
}
light_source{
	< 5.0, 0.25, 1.0 >
	color White
	fade_distance .5*vlength(freq16(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<4,0,2>
	<6,0.5,4>
	texture{pigment{color Black filter .8}}
}
light_source{
	< 5.0, 0.25, 3.0 >
	color White
	fade_distance .5*vlength(freq17(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<4,0,4>
	<6,0.5,6>
	texture{pigment{color White filter .8}}
}
light_source{
	< 5.0, 0.25, 5.0 >
	color White
	fade_distance .5*vlength(freq18(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<4,0,6>
	<6,0.5,8>
	texture{pigment{color Black filter .8}}
}
light_source{
	< 5.0, 0.25, 7.0 >
	color White
	fade_distance .5*vlength(freq19(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<4,0,8>
	<6,0.5,10>
	texture{pigment{color White filter .8}}
}
light_source{
	< 5.0, 0.25, 9.0 >
	color White
	fade_distance .5*vlength(freq20(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<4,0,10>
	<6,0.5,12>
	texture{pigment{color Black filter .8}}
}
light_source{
	< 5.0, 0.25, 11.0 >
	color White
	fade_distance .5*vlength(freq21(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<4,0,12>
	<6,0.5,14>
	texture{pigment{color White filter .8}}
}
light_source{
	< 5.0, 0.25, 13.0 >
	color White
	fade_distance .5*vlength(freq22(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<4,0,14>
	<6,0.5,16>
	texture{pigment{color Black filter .8}}
}
light_source{
	< 5.0, 0.25, 15.0 >
	color White
	fade_distance .5*vlength(freq23(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<6,0,0>
	<8,0.5,2>
	texture{pigment{color Black filter .8}}
}
light_source{
	< 7.0, 0.25, 1.0 >
	color White
	fade_distance .5*vlength(freq24(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<6,0,2>
	<8,0.5,4>
	texture{pigment{color White filter .8}}
}
light_source{
	< 7.0, 0.25, 3.0 >
	color White
	fade_distance .5*vlength(freq25(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<6,0,4>
	<8,0.5,6>
	texture{pigment{color Black filter .8}}
}
light_source{
	< 7.0, 0.25, 5.0 >
	color White
	fade_distance .5*vlength(freq26(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<6,0,6>
	<8,0.5,8>
	texture{pigment{color White filter .8}}
}
light_source{
	< 7.0, 0.25, 7.0 >
	color White
	fade_distance .5*vlength(freq27(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<6,0,8>
	<8,0.5,10>
	texture{pigment{color Black filter .8}}
}
light_source{
	< 7.0, 0.25, 9.0 >
	color White
	fade_distance .5*vlength(freq28(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<6,0,10>
	<8,0.5,12>
	texture{pigment{color White filter .8}}
}
light_source{
	< 7.0, 0.25, 11.0 >
	color White
	fade_distance .5*vlength(freq29(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<6,0,12>
	<8,0.5,14>
	texture{pigment{color Black filter .8}}
}
light_source{
	< 7.0, 0.25, 13.0 >
	color White
	fade_distance .5*vlength(freq30(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<6,0,14>
	<8,0.5,16>
	texture{pigment{color White filter .8}}
}
light_source{
	< 7.0, 0.25, 15.0 >
	color White
	fade_distance .5*vlength(freq31(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<8,0,0>
	<10,0.5,2>
	texture{pigment{color White filter .8}}
}
light_source{
	< 9.0, 0.25, 1.0 >
	color White
	fade_distance .5*vlength(freq32(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<8,0,2>
	<10,0.5,4>
	texture{pigment{color Black filter .8}}
}
light_source{
	< 9.0, 0.25, 3.0 >
	color White
	fade_distance .5*vlength(freq33(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<8,0,4>
	<10,0.5,6>
	texture{pigment{color White filter .8}}
}
light_source{
	< 9.0, 0.25, 5.0 >
	color White
	fade_distance .5*vlength(freq34(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<8,0,6>
	<10,0.5,8>
	texture{pigment{color Black filter .8}}
}
light_source{
	< 9.0, 0.25, 7.0 >
	color White
	fade_distance .5*vlength(freq35(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<8,0,8>
	<10,0.5,10>
	texture{pigment{color White filter .8}}
}
light_source{
	< 9.0, 0.25, 9.0 >
	color White
	fade_distance .5*vlength(freq36(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<8,0,10>
	<10,0.5,12>
	texture{pigment{color Black filter .8}}
}
light_source{
	< 9.0, 0.25, 11.0 >
	color White
	fade_distance .5*vlength(freq37(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<8,0,12>
	<10,0.5,14>
	texture{pigment{color White filter .8}}
}
light_source{
	< 9.0, 0.25, 13.0 >
	color White
	fade_distance .5*vlength(freq38(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<8,0,14>
	<10,0.5,16>
	texture{pigment{color Black filter .8}}
}
light_source{
	< 9.0, 0.25, 15.0 >
	color White
	fade_distance .5*vlength(freq39(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<10,0,0>
	<12,0.5,2>
	texture{pigment{color Black filter .8}}
}
light_source{
	< 11.0, 0.25, 1.0 >
	color White
	fade_distance .5*vlength(freq40(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<10,0,2>
	<12,0.5,4>
	texture{pigment{color White filter .8}}
}
light_source{
	< 11.0, 0.25, 3.0 >
	color White
	fade_distance .5*vlength(freq41(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<10,0,4>
	<12,0.5,6>
	texture{pigment{color Black filter .8}}
}
light_source{
	< 11.0, 0.25, 5.0 >
	color White
	fade_distance .5*vlength(freq42(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<10,0,6>
	<12,0.5,8>
	texture{pigment{color White filter .8}}
}
light_source{
	< 11.0, 0.25, 7.0 >
	color White
	fade_distance .5*vlength(freq43(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<10,0,8>
	<12,0.5,10>
	texture{pigment{color Black filter .8}}
}
light_source{
	< 11.0, 0.25, 9.0 >
	color White
	fade_distance .5*vlength(freq44(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<10,0,10>
	<12,0.5,12>
	texture{pigment{color White filter .8}}
}
light_source{
	< 11.0, 0.25, 11.0 >
	color White
	fade_distance .5*vlength(freq45(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<10,0,12>
	<12,0.5,14>
	texture{pigment{color Black filter .8}}
}
light_source{
	< 11.0, 0.25, 13.0 >
	color White
	fade_distance .5*vlength(freq46(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<10,0,14>
	<12,0.5,16>
	texture{pigment{color White filter .8}}
}
light_source{
	< 11.0, 0.25, 15.0 >
	color White
	fade_distance .5*vlength(freq47(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<12,0,0>
	<14,0.5,2>
	texture{pigment{color White filter .8}}
}
light_source{
	< 13.0, 0.25, 1.0 >
	color White
	fade_distance .5*vlength(freq48(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<12,0,2>
	<14,0.5,4>
	texture{pigment{color Black filter .8}}
}
light_source{
	< 13.0, 0.25, 3.0 >
	color White
	fade_distance .5*vlength(freq49(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<12,0,4>
	<14,0.5,6>
	texture{pigment{color White filter .8}}
}
light_source{
	< 13.0, 0.25, 5.0 >
	color White
	fade_distance .5*vlength(freq50(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<12,0,6>
	<14,0.5,8>
	texture{pigment{color Black filter .8}}
}
light_source{
	< 13.0, 0.25, 7.0 >
	color White
	fade_distance .5*vlength(freq51(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<12,0,8>
	<14,0.5,10>
	texture{pigment{color White filter .8}}
}
light_source{
	< 13.0, 0.25, 9.0 >
	color White
	fade_distance .5*vlength(freq52(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<12,0,10>
	<14,0.5,12>
	texture{pigment{color Black filter .8}}
}
light_source{
	< 13.0, 0.25, 11.0 >
	color White
	fade_distance .5*vlength(freq53(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<12,0,12>
	<14,0.5,14>
	texture{pigment{color White filter .8}}
}
light_source{
	< 13.0, 0.25, 13.0 >
	color White
	fade_distance .5*vlength(freq54(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<12,0,14>
	<14,0.5,16>
	texture{pigment{color Black filter .8}}
}
light_source{
	< 13.0, 0.25, 15.0 >
	color White
	fade_distance .5*vlength(freq55(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<14,0,0>
	<16,0.5,2>
	texture{pigment{color Black filter .8}}
}
light_source{
	< 15.0, 0.25, 1.0 >
	color White
	fade_distance .5*vlength(freq56(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<14,0,2>
	<16,0.5,4>
	texture{pigment{color White filter .8}}
}
light_source{
	< 15.0, 0.25, 3.0 >
	color White
	fade_distance .5*vlength(freq57(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<14,0,4>
	<16,0.5,6>
	texture{pigment{color Black filter .8}}
}
light_source{
	< 15.0, 0.25, 5.0 >
	color White
	fade_distance .5*vlength(freq58(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<14,0,6>
	<16,0.5,8>
	texture{pigment{color White filter .8}}
}
light_source{
	< 15.0, 0.25, 7.0 >
	color White
	fade_distance .5*vlength(freq59(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<14,0,8>
	<16,0.5,10>
	texture{pigment{color Black filter .8}}
}
light_source{
	< 15.0, 0.25, 9.0 >
	color White
	fade_distance .5*vlength(freq60(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<14,0,10>
	<16,0.5,12>
	texture{pigment{color White filter .8}}
}
light_source{
	< 15.0, 0.25, 11.0 >
	color White
	fade_distance .5*vlength(freq61(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<14,0,12>
	<16,0.5,14>
	texture{pigment{color Black filter .8}}
}
light_source{
	< 15.0, 0.25, 13.0 >
	color White
	fade_distance .5*vlength(freq62(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}
box{
	<14,0,14>
	<16,0.5,16>
	texture{pigment{color White filter .8}}
}
light_source{
	< 15.0, 0.25, 15.0 >
	color White
	fade_distance .5*vlength(freq63(clock)*x)/1000000
	fade_power 2
	looks_like {orb}
}

}