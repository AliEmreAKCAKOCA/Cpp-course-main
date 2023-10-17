// cpp19_2.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>


std::ostream& dashline(std::ostream& os)
{

    return os << "\n----------------------------------------------------\n";
}

int main()
{
    using namespace std;

    int ival{ 345 };
    double dval{ 524.2345 };
    long lval{ 2454l };

    cout << ival << dashline << dval << dashline << lval << dashline;
}

