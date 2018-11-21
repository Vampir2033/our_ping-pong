#include "info.h"

struct coord nextCoordinate(coord coordNow, int prevChangeTime, int timeNow, int speed, float angle)
{
	coord next;
	int t = timeNow - prevChangeTime;
	next.y = coordNow.y + (t*speed*(sin(atan(angle))));
	next.x = coordNow.x + (t*speed*(sin(1.5708 - atan(angle))));
	return next;
}