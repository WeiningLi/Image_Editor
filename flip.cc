#include "flip.h"
using namespace std;

Flip::Flip(Image *img) : Decorator{ img } {}

void Flip::render(PPM &ppm) {
	img->render(ppm);
	int width = ppm.getWidth();
	int height = ppm.getHeight();
	Pixel tmp;
	vector<Pixel> &p = ppm.getPixels();
	for (int i = 0; i < height; ++i) {
		for (int j = 0; j < (width / 2); ++j) {
			tmp = p[i * width + j];
			p[i * width + j] = p[(i + 1) * width - j - 1];
			p[(i + 1) * width - j - 1] = tmp;
		}
	}
}

