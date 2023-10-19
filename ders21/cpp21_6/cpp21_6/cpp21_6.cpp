// cpp21_6.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.



//Bir fonksiyon Bir state e sahip olabilir mi?

#include <iostream>


class Random {


public:
	Random(int low, int high) :mlow{ low }, mhigh{ high }{}
	int operator()() 
	{
     	return std::rand() % (mhigh - mlow + 1)* mlow;
	}
private:
	int mlow, mhigh;

};

int main()
{
	Random rand1{ 2300,2390 };
	Random rand2{ 45,50 };
	Random rand3{ 100000,1100000000 };


	for (int i = 0; i < 10; ++i)
	{
		std::cout << rand1() << " ";
	}

	std::cout << "\n\n\n";
	for (int i = 0; i < 10; ++i)
	{
		std::cout << rand2() << " ";
	}

	std::cout << "\n\n\n";
	for (int i = 0; i < 10; ++i)
	{
		std::cout << rand3() << " ";
	}


}