



def dist(disp):
    focal_length_mm=2.8
    sensor_pixels_per_mm=1 #2.016
    scale=1 #.3
    baseline_mm=146.685
    return baseline_mm * (focal_length_mm * sensor_pixels_per_mm) / (disp*scale)

#i am 136 away but am at about 3700 which is 146.65
def dist2(disp):
    focal_length_mm=2.8
    baseline_mm=200
    return baseline_mm * (focal_length_mm ) / (disp)
