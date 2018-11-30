import numpy as np
import numpy.fft
import scipy
import scipy.io.wavfile
import matplotlib.pyplot as plt

def mush(array,bins):
    out = []
    elements_per_bin = len(array)/bins
    for bin in range(bins):
        cur_slice = array[round(bin*elements_per_bin):round((bin+1)*elements_per_bin)]
        total = 0
        for el in cur_slice:
            total += el
        out.append(total/elements_per_bin)

    return out

#def make_mono(data):
#    out = np.zeros((data.shape[0]))
#    for sample_index in range(data.shape[0]):
#        total = 0
#        for channel in range(data.shape[-1]):
#            total += data[sample_index,channel]
#        out[sample_index] = (total/data.shape[-1])
#    return out

(rate,data) = scipy.io.wavfile.read("HAHA.wav") #pylint: disable=E1101
#just pulling the data from the left channel.

fps = 24
mono = data[:,0]
frame_length = int(rate/fps)
timecode = []
bins=64

for frame_number in range(round(data.shape[0]/frame_length)):
    frame = mono[frame_length*frame_number:frame_length*(frame_number+1)]
    frame_fft = abs(np.fft.fft(frame).real)
    timecode.append(mush(frame_fft,bins))

#write time code to file

spline_template = "\n\n#declare {identifier} = spline {{\n\tcubic_spline\n"

spline_file = open("music_splines.inc","w")
for freq in range(bins):
    spline_file.write(spline_template.format(identifier="freq"+str(freq)))
    for (frame_index,frame) in enumerate(timecode):
        spline_file.write("\t{0},{1}\n".format(frame_index/fps,frame[freq]))
    spline_file.write("}")
    

spline_file.close()

