#include <string>
#include <iostream>
#include "lib/mouse.h"

using namespace std;

int main()
{
    MMSignedPoint point;
	point = MMSignedPointMake(200, 200);
	moveMouse(point);
    cout << "Hello World" << endl;
}