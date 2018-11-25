//расчет изменения угла 
#include "info.h"

float angleChange(float angFw, float angOfObst)
{
	float angBack;		
	srand(time(NULL));				//для случайного изменения угла при столкновении с платформой
	if (angOfObst == 0) {			//при столкновении с верхней/нижней границей поля
		angBack = 2*PI - angFw;
	}
	else {												//отражение от платформ, угол случайно немного меняется
		case ((angFw >= 0) && (angFw<=(PI))):			//движение вверх
			angBack = PI - angFw + ((rand() % 1200 + 1000)/10000);
			break;
		case ((angFw >= PI) && (angFw<=(2*PI))):		//движение вниз 
			angBack = 3*PI - angFw + ((rand() % 1200 + 1000)/10000);
			break;
	}
	return angBack;					//возврат нового угла движения
}
