#pragma once

#include <iostream>
#include <random>


class car {

public:
	virtual void start()
	{
		std::cout << "Car has just started\n";
	}


	virtual void run()
	{
		std::cout << "Car is running now\n";

	}

	virtual void stop()
	{
		std::cout << "car has just stopped\n";
	}

	void test_car()
	{
		start();
		run();
		stop();
	}


};




class Volvo :public car
{

public:
	void start() override
	{
		std::cout << "volvo has just started\n";
	}

	void run()override
	{
		std::cout << "volvo is running now\n";
	}

	void stop()override
	{
		std::cout << "volvo has just stopped\n";
	}


};

class VolvoXC90:public Volvo   {
public:
	void start() override
	{
		std::cout << "volvo xc90 has just started\n";
	}

	void run()override
	{
		std::cout << "volvo xc90 is running now\n";
	}

	void stop()override
	{
		std::cout << "volvo xc90 has just stopped\n";
	}


};




class Opel :public car
{

public:
	void start() override
	{
		std::cout << "Opel has just started\n";
	}

	void run()override
	{
		std::cout << "Opel is running now\n";
	}

	void stop()override
	{
		std::cout << "Opel has just stopped\n";
	}


};




class Fiat :public car
{

public:
	void start() override
	{
		std::cout << "Fiat has just started\n";
	}

	void run()override
	{
		std::cout << "Fiat is running now\n";
	}

	void stop()override
	{
		std::cout << "Fiat has just stopped\n";
	}


};



class Audi :public car
{

public:
	void start() override
	{
		std::cout << "Audi has just started\n";
	}

	void run()override
	{
		std::cout << "Audi is running now\n";
	}

	void stop()override
	{
		std::cout << "Audi has just stopped\n";
	}


};



class Honda :public car
{

public:
	void start() override
	{
		std::cout << "Honda has just started\n";
	}

	void run()override
	{
		std::cout << "Honda is running now\n";
	}

	void stop()override
	{
		std::cout << "Honda has just stopped\n";
	}


};



class Mercedes :public car
{
public:
	void start() override
	{
		std::cout << "Mercedes has just started\n";
	}

	void run()override
	{
		std::cout << "mercedes is running now\n";
	}

	void stop()override
	{
		std::cout << "Mercedes has just stopped\n";
	}

};



class Togg :public car
{
public:
	void start() override
	{
		std::cout << "togg has just started\n";
	}

	void run()override
	{
		std::cout << "togg is running now\n";
	}

	void stop()override
	{
		std::cout << "togg has just stopped\n";
	}

};


car* create_random_car()
{
	static std::mt19937 eng{ std::random_device{}() };
	static std::uniform_int_distribution dist{ 0,6 };  //cpp yeni standartlar

	switch (dist(eng))
	{
	case 0:std::cout << "volvo...."; return new Volvo;
	case 1:std::cout << "opel...."; return new Opel;
	case 2:std::cout << "Audi...."; return new Audi;
	case 3:std::cout << "Honda...."; return new Honda;
	case 4:std::cout << "Fiat...."; return new Fiat;
	case 5:std::cout << "Mercedes...."; return new Mercedes;
	case 6:std::cout << "togg...."; return new Togg;
	}
	return nullptr;

}