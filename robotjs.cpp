#include <string>
#include <iostream>
#include "lib/mouse.h"

#if defined(USE_X11)
    #include "lib/xdisplay.h"
#endif

using namespace std;

int main()
{
    MMSignedPoint point;
	point = MMSignedPointMake(200, 200);
	moveMouse(point);
    cout << "Hello World" << endl;
}