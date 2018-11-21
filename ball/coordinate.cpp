//расчет следующей координаты
#include "info.h"

struct coord nextCoordinate(coord coordNow, int prevChangeTime, int timeNow, int speed, float angle)
{
	coord next;		
	int t = timeNow - prevChangeTime;									//время изменения 
	next.y = coordNow.y + (t*speed*(sin(atan(angle))));					//измененная y-координата
	next.x = coordNow.x + (t*speed*(sin(1.5708 - atan(angle))));		//измененная х-координата
	return next;														//возвращаем новые координаты
}
