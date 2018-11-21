#include "info.h"

float angleChange(float angFw, float angOfObst)
{
	float angBack;
	srand(time(NULL));
	if (angOfObst == 0) {
		angBack = (-1)*angFw;
	}
	else {
		angBack = (-1)*angFw + ((rand() % 5000 + 1000)/1000);
	}
	return angBack;
}