#include "sepia.h"
using namespace std;

Sepia::Sepia(Image *img) : Decorator{ img } {}

void Sepia::render(PPM &ppm) {
	img->render(ppm);
	vector<Pixel> &p = ppm.getPixels();
	for (size_t i = 0; i < p.size(); ++i) {
		unsigned int newr = p[i].r *.393 + p[i].g * .769 + p[i].b * .189;
		unsigned int newg = p[i].r *.349 + p[i].g * .686 + p[i].b * .168;
		unsigned int newb = p[i].r *.272 + p[i].g * .534 + p[i].b * .131;
		if (newr > colourMax) newr = colourMax;
		if (newg > colourMax) newg = colourMax;
		if (newb > colourMax) newb = colourMax;
		Pixel np{ newr, newg, newb };
		p[i] = np;
	}
}

