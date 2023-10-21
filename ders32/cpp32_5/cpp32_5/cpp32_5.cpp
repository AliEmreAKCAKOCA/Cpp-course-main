#include <iostream>
#include "car.h"


/*
void car_game(car* p)
{
	p->start();
	p->run();
	p->stop();
	(void)getchar();

}
*/

/*
void car_game(car& r)
{
	r.start();
	r.run();
	r.stop();
	//(void)getchar();

}
*/



void car_game(car r)
{
	r.start();
	r.run();
	r.stop();
	//(void)getchar();

}

int main() {
	for (int i = 0; i < 66; ++i) 
	{
		car* p = create_random_car();
		std::cout << "\n";
		car_game(*p);

		//  code......


	} 



}