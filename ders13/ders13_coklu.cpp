// ders13_coklu.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>


class Nec {


public:
	Nec()
	{
		std::cout << "Nec def. Constr. this= " << this << std::endl;
	}

	~Nec()
	{
		std::cout << "Nec def. destrnstr. this= " << this << std::endl;
	}

};


class Erg {



public:
	Erg()
	{
		std::cout << "Erg def. Constr. this= " << this << std::endl;

	}

	~Erg()
	{

		std::cout << "Nec def. Constr. this= " << this << std::endl;
	}



};

void foo()
{
	Nec mynec;

}


int main()
{
	std::cout << "program basladi" << std::endl;

	foo();
	foo();
	foo();
	foo();
	foo();
	foo();
	foo();
	foo();

	std::cout << "son  erdi" << std::endl;


}