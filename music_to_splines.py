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

(rate,data) = scipy.io.wavfile.read("HAHA.wav") #pylint: disable=E1101
#mushdata
mono = data[:,0]

frame_length = int(rate/24)

frame_number = 400
frame = mono[frame_length*frame_number:frame_length*(frame_number+1)]

frame_fft = abs(np.fft.fft(frame).real)
frame_freq = np.fft.fftfreq(frame.shape[-1])

#plt.plot(frame_freq, frame_fft)
#plt.show()

print(mush(frame_fft,64))