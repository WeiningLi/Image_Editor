#include "image.h"
#include "decorator.h"
using namespace std;

Decorator::Decorator(Image * img) : img{ img } {}
Decorator::~Decorator() { delete img; }

