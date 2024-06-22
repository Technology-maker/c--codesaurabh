// it is use to solve problem of initilization

// (1) deafault constructor
// (2) parameterized constructor
// (3) constructor overloading
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

// #include <iostream>
// using namespace std;

// class complex
// {
//     int a, b;

// public:
//     complex(int x, int y)
//     {
//         a = x;
//         b = y;
//         cout << "value of x = " << a * 2 * 2 << endl
//              << "value of y = " << b * 2 << endl;
//     }
//     complex(int z)

//     {
//         cout << "value of z = " << z * 2 << endl;
//     }

//     complex()
//     {
//         cout << "Hello Satender Yadav";
//     }
// };

// int main()
// {
//     complex c1(4, 6), c2(4), c3;
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
//
//





#include <iostream>
using namespace std;

class construct
{
    int x, y;

public:
    construct(int a, int b)
    {
        x = a;
        y = b;
        cout << x << endl
             << y << endl;
    }
    construct(int b)
    {

        x = b;

        cout << "x = " << x << endl;
    }
    construct()
    {
        cout << "hello const" <<endl;
    }

    construct(construct &c2)     // copy condstructor 
    {
        x = c2.x;
        y = c2.y;
        cout << "x = " << x << endl
             << "y = " << y << endl;
    }
};

int main()
{
    construct c1(33, 5), c2(3), c3;
    construct c4(c1); //                it is copy constructor
};
