#include "stdafx.h"
#include "WindowsProject1.h"

// объявление класса поля
class  Field
{
 private:
 	int widthField; // ширина поля          
 public:
	int get_width(); // объявление метода получения ширины поля
}

class Platform
{
private:
	double 	time_last_change, 	// время последнего изменения
		current_width, 		// текущая ширина поля
		speed, 			// Скорость дощечки
		current_pos,		// Текущие координаты
		platform_width;		// ширина дощечки
public:
	//запрос информации о ширине поля у класса поле будет происходить в конструкторе
	Platform();
	{
		widthField = get_width();
		time_last_change = current_time;
		speed = 15; // это к примеру
		platform_width = 10; // тоже к примеру
		current_pos = widthField / 2 - platform_width;
	}
	
	/*Проверка на то двигался ли предмет
	возвращаемые значения:
		1 - движение вправо
		-1 - движение влево
		0 - движения нет */
	int direction_of_travel(); // вот это называется объявление функции                       

	// метод вычисляет новую координату платформы
	void UpdatePhysicsPlatform()
	{
		int direction = 0;
		if(direction = direction_of_travel()){
			current_pos += speed * (current_time - time_last_change) * direction; // смещение платформы
		}
		last_time_change = current_time; // обновление времени
	}
}
