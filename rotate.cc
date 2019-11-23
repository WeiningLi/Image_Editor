#include "rotate.h"
using namespace std;

Rotate::Rotate(Image *img) : Decorator{ img } {}

void Rotate::render(PPM &ppm) {
	img->render(ppm);
	int& width = ppm.getWidth();
	int& height = ppm.getHeight();
	// change the size format of the image
	int tmpSize = width;
	width = height;
	height = tmpSize;
	Pixel tmp;

	vector<Pixel> &np = ppm.getPixels();
	vector<Pixel> p = np;
	for (int i = 0; i < height; ++i) {
		for (int j = 0; j < width; ++j) {
			np[i * width + j] = p[height * (width - j - 1) + i];
		}
	}
}

