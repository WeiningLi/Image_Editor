# imageEditor
c++ program to edit ppm typed images using decorator pattern

## 3 types of operations: flip, rotate, and sepia

### flip: 
ﬂip image horizontally

### rotate: 
rotate image 90 degrees clockwise

### sepia: 
modify RGB values as following:

  red: `np.r = p.r *.393 + p.g * .769 + p.b * .189`

  green: `np.g = p.r *.349 + p.g * .686 + p.b * .168 `

  blue: `np.b = p.r *.272 + p.g * .534 + p.b * .131 `


use MakeFile to compile and build editor:

`make`

, then run:

`./editor source.ppm destination.ppm flip rotate flip sepia`

