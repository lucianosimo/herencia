#ifndef AUTO3_H
#define AUTO3_H
#include <ctime>
#include "Auto.h"

class Auto3 : public Auto {
protected:
	bool cambio;
	int colorAuto;

public:
	Auto3(int v, int x0,int y0);
	Auto3(){};
	void Colorear();
	int getX(){return x;}
	int getY(){return y;}
	void update();
};


#endif

