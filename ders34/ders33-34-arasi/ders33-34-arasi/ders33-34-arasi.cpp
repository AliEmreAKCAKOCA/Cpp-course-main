// ders33-34-arasi.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

class Device {
public:
    bool is_on()const {
        return mflag;
    }
    void turn_on() {
        mflag = true;
        std::cout << "cihaz acildi\n";
    }
    void turn_off() {
        mflag = false;
        std::cout << "cihaz kapatiildi\n";
    }

private:
    bool mflag;

};

class Fax :public Device {
public:
    virtual void send_fax() 
    {
        if (is_on())
        {
            std::cout << "fax gonderildi \n";
        }
        else
        {
            std::cout << "cihaz kapalı fax gonderilemedi \n";
        }

    }
    virtual void receive_fax() 
    {
        if (is_on())
        {
            std::cout << "fax alindi \n";
        }
        else
        {
            std::cout << "cihaz kapalı fax alinamadi \n";
        }

    }


};

class Modem :public Device {
public:
    virtual void send_data()
    {
        if (is_on())
        {
            std::cout << "data gonderildi \n";
        }
        else
        {
            std::cout << "cihaz kapalı data gonderilemedi \n";
        }

    }

    virtual void receive_data()
    {
        if (is_on())
        {
            std::cout << "data  alindi \n";
        }
        else
        {
            std::cout << "cihaz kapalı data alinamadi \n";
        }

    }
};

class FaxModem :public Fax, public Modem {

};


int main()
{
    FaxModem fm;
    fm.Fax::turn_on();
    fm.receive_fax();
    fm.send_data();
}
