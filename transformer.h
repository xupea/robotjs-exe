#include "utils.h"

#include "lib/mouse.h"
#include "lib/deadbeef_rand.h"
#include "lib/keypress.h"
#include "lib/screen.h"
#include "lib/microsleep.h"

using namespace std;

#ifdef __cplusplus
extern "C"
{
#endif

void moveMouseMediator(string params);
void mouseClickMediator(string params);
void dragMouseMediator(string params);
void mouseToggleMediator(string params);

void keyTapMediator(string params);

#ifdef __cplusplus
}
#endif
