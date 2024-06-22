// #include <iostream>
// using namespace std;

// class car
// {

//     int gear = 0;

// public:

//     void setgear(int g)
//     {
//         gear = g;
//     }

//     void showdata(){
//         cout<<"current gear is = "<<gear;
//     }

// };

// class sportcar : public car
// {
// public:
//     int aces;

// };

// int main()
// {

//     int n;
//     cout << "enter gear number. ";
//     cin >> n;
//    car c1;
//    c1.setgear(n);
//    c1.showdata();
// }
//
//
//
//
//
//
//
//
//
//
//
//
//

#include <iostream>
using namespace std;

class ara
{

    int arr[10];

public:
    void set_value(int index, int value)
    {
        arr[index] = value;
        cout << "value arr[" << index << "] = " << value << endl;
    }
};

class STATIC : public ara
{
    int top = 2;

public:
    void plus_value(int Vvalue)
    {
        set_value(top, Vvalue);
    }
};

int main()
{

    STATIC s1;
    s1.set_value(0, 67);
    // s1.show_data();
    s1.plus_value(78);
}
