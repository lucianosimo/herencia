#ifndef AUTO1_H
#define AUTO1_H
#include <ctime>
#include "Auto.h"

class Auto1 : public Auto {
	
public:
	Auto1(int v, int x0,int y0);
	Auto1(){};
	bool update();
	int getX(){return x;}
	int getY(){return y;}
};

#endif
