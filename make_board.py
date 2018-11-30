board_template_file = open("board_template.inc","r")
template = board_template_file.read()
board_template_file.close()
board_file = open("board.inc","w")
board_file.write(template)

spline = 0
width = 2
box_template = "\tbox{{\n\t\t<{x0},0,{z0}>\n\t\t<{x1},{heigth},{z1}>\n\t\t\
texture{{pigment{{color {color} filter .8}}}}\
\n}}\n"

light_template = "\
\tlight_source{{\n\
\t\t< {x}, {heigth}, {z} >\n\
\t\tcolor White\n\
\t\tfade_distance 1\n\
\t\tfade_power 1000000/vlength(freq{freq}(clock))\n\
}}\n"

try:
    for x in range(8):
        for y in range(8):
            color = "White" if (x+y)%2 == 0 else "Black"
            board_file.write(box_template.format(
                x0 = x*width,
                x1 = (x+1)*width,
                z0 = y*width,
                z1 = (y+1)*width,
                heigth = .5,
                color = color
            ))
            board_file.write(light_template.format(
                x = (x+.5)*width,
                z = (y+.5)*width,
                heigth = .25,
                freq = spline
            ))
            spline += 1
    board_file.write("\n\n}")
finally:
    board_file.close()