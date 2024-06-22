#include <iostream>
using namespace std;

class car
{

    int price;
    char name[20];
    int horcepower;
    float speed;

public:
    void set_price(int prc)
    {
        price = prc;
    }

    // void set_name(char & car_name)
    // {
    //     name[20] = car_name;
    // }

    void set_horcepow(int hp)
    {
        horcepower = hp;
    }
    void set_speed(int spd)
    {
        speed = spd;
    }

    void show_data()
    {
        cout
            << "price of a car is  = " << price << endl
            << "Horce power is = " << horcepower << endl
            << "spdee of a car = " << speed << endl;
    }
};

class sports_car : public car
{
    int seats;
    int eingin_power;

public:
    void set_seats(int set)
    {
        seats = set;
    }
    void eng_pow(int enpow)
    {
        eingin_power = enpow;
    }

        void spt_car_data()
    {
        cout
            << "seats  = " << seats << endl
            << "Horce power is = " << eingin_power << endl;
    }
};

int main()
{
    char nam[20];
    cin >> nam;
    car c1;
    c1.set_price(6700000);
    c1.set_horcepow(3);
    c1.set_speed(190);
    c1.show_data();

    sports_car supra;

    supra.set_speed(240);
    supra.set_price(1500000);
    supra.eng_pow(15000);
    supra.set_seats(2);
    supra.spt_car_data();
}