
//This is a really basic board, the board will be more complicated in the future, but for now this works. -Jake
//I will make sure that the dimentions on future boards will the same as this one -Jake
#include "splines/music_splines.inc"

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
		color rgb freq0(clock)/100000
}
	box{
		<0,0,2>
		<2,0.5,4>
		texture{pigment{color Black filter .8}}
}
	light_source{
		< 1.0, 0.25, 3.0 >
		color rgb freq1(clock)/100000
}
	box{
		<0,0,4>
		<2,0.5,6>
		texture{pigment{color White filter .8}}
}
	light_source{
		< 1.0, 0.25, 5.0 >
		color rgb freq2(clock)/100000
}
	box{
		<0,0,6>
		<2,0.5,8>
		texture{pigment{color Black filter .8}}
}
	light_source{
		< 1.0, 0.25, 7.0 >
		color rgb freq3(clock)/100000
}
	box{
		<0,0,8>
		<2,0.5,10>
		texture{pigment{color White filter .8}}
}
	light_source{
		< 1.0, 0.25, 9.0 >
		color rgb freq4(clock)/100000
}
	box{
		<0,0,10>
		<2,0.5,12>
		texture{pigment{color Black filter .8}}
}
	light_source{
		< 1.0, 0.25, 11.0 >
		color rgb freq5(clock)/100000
}
	box{
		<0,0,12>
		<2,0.5,14>
		texture{pigment{color White filter .8}}
}
	light_source{
		< 1.0, 0.25, 13.0 >
		color rgb freq6(clock)/100000
}
	box{
		<0,0,14>
		<2,0.5,16>
		texture{pigment{color Black filter .8}}
}
	light_source{
		< 1.0, 0.25, 15.0 >
		color rgb freq7(clock)/100000
}
	box{
		<2,0,0>
		<4,0.5,2>
		texture{pigment{color Black filter .8}}
}
	light_source{
		< 3.0, 0.25, 1.0 >
		color rgb freq8(clock)/100000
}
	box{
		<2,0,2>
		<4,0.5,4>
		texture{pigment{color White filter .8}}
}
	light_source{
		< 3.0, 0.25, 3.0 >
		color rgb freq9(clock)/100000
}
	box{
		<2,0,4>
		<4,0.5,6>
		texture{pigment{color Black filter .8}}
}
	light_source{
		< 3.0, 0.25, 5.0 >
		color rgb freq10(clock)/100000
}
	box{
		<2,0,6>
		<4,0.5,8>
		texture{pigment{color White filter .8}}
}
	light_source{
		< 3.0, 0.25, 7.0 >
		color rgb freq11(clock)/100000
}
	box{
		<2,0,8>
		<4,0.5,10>
		texture{pigment{color Black filter .8}}
}
	light_source{
		< 3.0, 0.25, 9.0 >
		color rgb freq12(clock)/100000
}
	box{
		<2,0,10>
		<4,0.5,12>
		texture{pigment{color White filter .8}}
}
	light_source{
		< 3.0, 0.25, 11.0 >
		color rgb freq13(clock)/100000
}
	box{
		<2,0,12>
		<4,0.5,14>
		texture{pigment{color Black filter .8}}
}
	light_source{
		< 3.0, 0.25, 13.0 >
		color rgb freq14(clock)/100000
}
	box{
		<2,0,14>
		<4,0.5,16>
		texture{pigment{color White filter .8}}
}
	light_source{
		< 3.0, 0.25, 15.0 >
		color rgb freq15(clock)/100000
}
	box{
		<4,0,0>
		<6,0.5,2>
		texture{pigment{color White filter .8}}
}
	light_source{
		< 5.0, 0.25, 1.0 >
		color rgb freq16(clock)/100000
}
	box{
		<4,0,2>
		<6,0.5,4>
		texture{pigment{color Black filter .8}}
}
	light_source{
		< 5.0, 0.25, 3.0 >
		color rgb freq17(clock)/100000
}
	box{
		<4,0,4>
		<6,0.5,6>
		texture{pigment{color White filter .8}}
}
	light_source{
		< 5.0, 0.25, 5.0 >
		color rgb freq18(clock)/100000
}
	box{
		<4,0,6>
		<6,0.5,8>
		texture{pigment{color Black filter .8}}
}
	light_source{
		< 5.0, 0.25, 7.0 >
		color rgb freq19(clock)/100000
}
	box{
		<4,0,8>
		<6,0.5,10>
		texture{pigment{color White filter .8}}
}
	light_source{
		< 5.0, 0.25, 9.0 >
		color rgb freq20(clock)/100000
}
	box{
		<4,0,10>
		<6,0.5,12>
		texture{pigment{color Black filter .8}}
}
	light_source{
		< 5.0, 0.25, 11.0 >
		color rgb freq21(clock)/100000
}
	box{
		<4,0,12>
		<6,0.5,14>
		texture{pigment{color White filter .8}}
}
	light_source{
		< 5.0, 0.25, 13.0 >
		color rgb freq22(clock)/100000
}
	box{
		<4,0,14>
		<6,0.5,16>
		texture{pigment{color Black filter .8}}
}
	light_source{
		< 5.0, 0.25, 15.0 >
		color rgb freq23(clock)/100000
}
	box{
		<6,0,0>
		<8,0.5,2>
		texture{pigment{color Black filter .8}}
}
	light_source{
		< 7.0, 0.25, 1.0 >
		color rgb freq24(clock)/100000
}
	box{
		<6,0,2>
		<8,0.5,4>
		texture{pigment{color White filter .8}}
}
	light_source{
		< 7.0, 0.25, 3.0 >
		color rgb freq25(clock)/100000
}
	box{
		<6,0,4>
		<8,0.5,6>
		texture{pigment{color Black filter .8}}
}
	light_source{
		< 7.0, 0.25, 5.0 >
		color rgb freq26(clock)/100000
}
	box{
		<6,0,6>
		<8,0.5,8>
		texture{pigment{color White filter .8}}
}
	light_source{
		< 7.0, 0.25, 7.0 >
		color rgb freq27(clock)/100000
}
	box{
		<6,0,8>
		<8,0.5,10>
		texture{pigment{color Black filter .8}}
}
	light_source{
		< 7.0, 0.25, 9.0 >
		color rgb freq28(clock)/100000
}
	box{
		<6,0,10>
		<8,0.5,12>
		texture{pigment{color White filter .8}}
}
	light_source{
		< 7.0, 0.25, 11.0 >
		color rgb freq29(clock)/100000
}
	box{
		<6,0,12>
		<8,0.5,14>
		texture{pigment{color Black filter .8}}
}
	light_source{
		< 7.0, 0.25, 13.0 >
		color rgb freq30(clock)/100000
}
	box{
		<6,0,14>
		<8,0.5,16>
		texture{pigment{color White filter .8}}
}
	light_source{
		< 7.0, 0.25, 15.0 >
		color rgb freq31(clock)/100000
}
	box{
		<8,0,0>
		<10,0.5,2>
		texture{pigment{color White filter .8}}
}
	light_source{
		< 9.0, 0.25, 1.0 >
		color rgb freq32(clock)/100000
}
	box{
		<8,0,2>
		<10,0.5,4>
		texture{pigment{color Black filter .8}}
}
	light_source{
		< 9.0, 0.25, 3.0 >
		color rgb freq33(clock)/100000
}
	box{
		<8,0,4>
		<10,0.5,6>
		texture{pigment{color White filter .8}}
}
	light_source{
		< 9.0, 0.25, 5.0 >
		color rgb freq34(clock)/100000
}
	box{
		<8,0,6>
		<10,0.5,8>
		texture{pigment{color Black filter .8}}
}
	light_source{
		< 9.0, 0.25, 7.0 >
		color rgb freq35(clock)/100000
}
	box{
		<8,0,8>
		<10,0.5,10>
		texture{pigment{color White filter .8}}
}
	light_source{
		< 9.0, 0.25, 9.0 >
		color rgb freq36(clock)/100000
}
	box{
		<8,0,10>
		<10,0.5,12>
		texture{pigment{color Black filter .8}}
}
	light_source{
		< 9.0, 0.25, 11.0 >
		color rgb freq37(clock)/100000
}
	box{
		<8,0,12>
		<10,0.5,14>
		texture{pigment{color White filter .8}}
}
	light_source{
		< 9.0, 0.25, 13.0 >
		color rgb freq38(clock)/100000
}
	box{
		<8,0,14>
		<10,0.5,16>
		texture{pigment{color Black filter .8}}
}
	light_source{
		< 9.0, 0.25, 15.0 >
		color rgb freq39(clock)/100000
}
	box{
		<10,0,0>
		<12,0.5,2>
		texture{pigment{color Black filter .8}}
}
	light_source{
		< 11.0, 0.25, 1.0 >
		color rgb freq40(clock)/100000
}
	box{
		<10,0,2>
		<12,0.5,4>
		texture{pigment{color White filter .8}}
}
	light_source{
		< 11.0, 0.25, 3.0 >
		color rgb freq41(clock)/100000
}
	box{
		<10,0,4>
		<12,0.5,6>
		texture{pigment{color Black filter .8}}
}
	light_source{
		< 11.0, 0.25, 5.0 >
		color rgb freq42(clock)/100000
}
	box{
		<10,0,6>
		<12,0.5,8>
		texture{pigment{color White filter .8}}
}
	light_source{
		< 11.0, 0.25, 7.0 >
		color rgb freq43(clock)/100000
}
	box{
		<10,0,8>
		<12,0.5,10>
		texture{pigment{color Black filter .8}}
}
	light_source{
		< 11.0, 0.25, 9.0 >
		color rgb freq44(clock)/100000
}
	box{
		<10,0,10>
		<12,0.5,12>
		texture{pigment{color White filter .8}}
}
	light_source{
		< 11.0, 0.25, 11.0 >
		color rgb freq45(clock)/100000
}
	box{
		<10,0,12>
		<12,0.5,14>
		texture{pigment{color Black filter .8}}
}
	light_source{
		< 11.0, 0.25, 13.0 >
		color rgb freq46(clock)/100000
}
	box{
		<10,0,14>
		<12,0.5,16>
		texture{pigment{color White filter .8}}
}
	light_source{
		< 11.0, 0.25, 15.0 >
		color rgb freq47(clock)/100000
}
	box{
		<12,0,0>
		<14,0.5,2>
		texture{pigment{color White filter .8}}
}
	light_source{
		< 13.0, 0.25, 1.0 >
		color rgb freq48(clock)/100000
}
	box{
		<12,0,2>
		<14,0.5,4>
		texture{pigment{color Black filter .8}}
}
	light_source{
		< 13.0, 0.25, 3.0 >
		color rgb freq49(clock)/100000
}
	box{
		<12,0,4>
		<14,0.5,6>
		texture{pigment{color White filter .8}}
}
	light_source{
		< 13.0, 0.25, 5.0 >
		color rgb freq50(clock)/100000
}
	box{
		<12,0,6>
		<14,0.5,8>
		texture{pigment{color Black filter .8}}
}
	light_source{
		< 13.0, 0.25, 7.0 >
		color rgb freq51(clock)/100000
}
	box{
		<12,0,8>
		<14,0.5,10>
		texture{pigment{color White filter .8}}
}
	light_source{
		< 13.0, 0.25, 9.0 >
		color rgb freq52(clock)/100000
}
	box{
		<12,0,10>
		<14,0.5,12>
		texture{pigment{color Black filter .8}}
}
	light_source{
		< 13.0, 0.25, 11.0 >
		color rgb freq53(clock)/100000
}
	box{
		<12,0,12>
		<14,0.5,14>
		texture{pigment{color White filter .8}}
}
	light_source{
		< 13.0, 0.25, 13.0 >
		color rgb freq54(clock)/100000
}
	box{
		<12,0,14>
		<14,0.5,16>
		texture{pigment{color Black filter .8}}
}
	light_source{
		< 13.0, 0.25, 15.0 >
		color rgb freq55(clock)/100000
}
	box{
		<14,0,0>
		<16,0.5,2>
		texture{pigment{color Black filter .8}}
}
	light_source{
		< 15.0, 0.25, 1.0 >
		color rgb freq56(clock)/100000
}
	box{
		<14,0,2>
		<16,0.5,4>
		texture{pigment{color White filter .8}}
}
	light_source{
		< 15.0, 0.25, 3.0 >
		color rgb freq57(clock)/100000
}
	box{
		<14,0,4>
		<16,0.5,6>
		texture{pigment{color Black filter .8}}
}
	light_source{
		< 15.0, 0.25, 5.0 >
		color rgb freq58(clock)/100000
}
	box{
		<14,0,6>
		<16,0.5,8>
		texture{pigment{color White filter .8}}
}
	light_source{
		< 15.0, 0.25, 7.0 >
		color rgb freq59(clock)/100000
}
	box{
		<14,0,8>
		<16,0.5,10>
		texture{pigment{color Black filter .8}}
}
	light_source{
		< 15.0, 0.25, 9.0 >
		color rgb freq60(clock)/100000
}
	box{
		<14,0,10>
		<16,0.5,12>
		texture{pigment{color White filter .8}}
}
	light_source{
		< 15.0, 0.25, 11.0 >
		color rgb freq61(clock)/100000
}
	box{
		<14,0,12>
		<16,0.5,14>
		texture{pigment{color Black filter .8}}
}
	light_source{
		< 15.0, 0.25, 13.0 >
		color rgb freq62(clock)/100000
}
	box{
		<14,0,14>
		<16,0.5,16>
		texture{pigment{color White filter .8}}
}
	light_source{
		< 15.0, 0.25, 15.0 >
		color rgb freq63(clock)/100000
}


}