// #include <iostream>
// using namespace std;

// class addobject
// {
//     int x, y;

// public:
//     void datain(int a, int b)
//     {
//         x = a;
//         y = b;
//     }
//     void displaydata()
//     {
//         cout << "value of x = " << x << endl
//              << "value of y = " << y;
//     }
//     addobject addfun(addobject add_num)
//     {
//         addobject temp;
//         temp.x = x + add_num.x;
//         temp.y = y + add_num.y;
//         return temp;
//     }
// };

// int main()
// {
//     addobject add1, add2, add3,display;
//     add2.datain(2, 4), add3.datain(4, 2);
//     add1 = add2.addfun(add3);
//     add1.displaydata();

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

class complex
{
    int a, b;

public:
    void indata(int x, int y)
    {
        a = x;
        b = y;
    }

    void setadata()
    {
        cout << "value of a = " << a << endl
             << "value of b = " << b;
    }

    complex add(complex addition)
    {
        complex store;
        store.a = a + addition.a;
        store.b = b + addition.b;
    };
    void dispay()
    {
        cout << "a = " << a << endl
             << "b = " << b;
    }
};

int main()
{
    complex s1, s2, s3;
    s1.indata(2, 4);
    s2.indata(6, 8);
    s3.add(s1);
    s3.dispay();
}