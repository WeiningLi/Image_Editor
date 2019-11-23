#ifndef SEPIA_H
#define SEPIA_H
#include "ppm.h"
#include "decorator.h"

class Sepia: public Decorator {
public:
	Sepia(Image* img);
	void render(PPM &ppm) override;
};
#endif

