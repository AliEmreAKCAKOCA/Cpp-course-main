/*
X a = b
tanımlamasıyla
X a(b)
tanımlaması tamamen eşdeğerdir.
*/

#include <iostream>
#include <ctime>


class Date{

    int day,month,year; 

    public:
        Date();
        Date(int, int, int);
        void display();


};


Date::Date()
{

    time_t timer = time(0);
    tm *tptr = localtime(&timer);
    day = tptr -> tm_mday;
    month = tptr -> tm_mon + 1;
    year = tptr -> tm_year + 1900;
}

Date::Date(int d, int m, int y)
{
    day=d;
    month=m;
    year=y;


}

void Date::display()
{

    std::cout<<day<<". "<<month<<" . "<<year;
}

int main()
{
    Date date1;

    date1.display();


    Date date2(2,3,1998);
    std::cout<<std::endl;
    date2.display();
    std::cout<<std::endl;



}