// #include <iostream>
// using namespace std;

// class frd_function
// {

//     int num1, num2;

// public:
//     void show_data()
//     {
//         cout<<"num1 = "<<num1<<endl<<"num2 = "<<num2<<endl;
//     }

//     void data_input(int n1, int n2)
//     {
//         num1 = n1;
//         num2 = n2;
//     }

//     friend void funct(frd_function);
// };

// void funct(frd_function paramiters)
// {
//     cout << "value of f1.num1 + f1.num2 = " << paramiters.num1 + paramiters.num2;
// }

// int main()
// {

//     frd_function f1;
//     f1.data_input(3, 7);
//     f1.show_data();
//     funct(f1);
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

//          friend function use in two class

// #include <iostream>
// using namespace std;
// class first;
// class second;

// class first
// {
//     int obj1;

// public:
//     void setdata(int a)
//     {
//         obj1 = a;
//     }

//     friend void addition(first, second);
// };

// class second
// {
//     int obj2;

// public:
//     void setdata(int b)
//     {
//         obj2 = b;
//     }

//     friend void addition(first, second);
// };

// void addition(first numb1, second numb2)
// {

//     cout << "addition of two number. " << numb1.obj1 + numb2.obj2;
// }
// int main()
// {
//     int a, b;
//     cout << "enter one number in class first. ";
//     cin >> a;
//     cout << "enter one number in class second. ";
//     cin >> b;

//     first f1;
//     second s1;
//     f1.setdata(a);
//     s1.setdata(b);

//     addition(f1, s1);
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

// #include <iostream>
// using namespace std;

// class addition
// {
//     int a, b;

// public:
//     void value_set(int x, int y)
//     {
//         a = x;
//         b = y;
//     }

//     friend addition operator+(addition, addition);
//     friend addition showdat(addition);
// };

// addition showdat(addition rvalue)
// {
//     addition ret;
//     cout << "value of a = " << rvalue.a << endl
//          << "value of b = " << rvalue.b;
//     return ret;
// }

// addition operator+(addition first, addition second)
// {

//     addition temp;
//     temp.a = first.a + second.a;
//     temp.b = first.b + second.b;

//     return temp;
// }

// int main()
// {
//     addition a1, a2,a3;
//     a1.value_set(3, 5);
//     a2.value_set(3, 2);

//     a3 = a1 + a2;
//     a3 = showdat(a3);
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

// one class member function     and     another class friend function

#include <iostream>
using namespace std;

class first
{
public:
    int j, k;
    void show_data()
    {
        
    }
};

class second
{
public:
    friend class first;
};

void show_data() {

    cout << "this function will work !";

};

int main()
{
    first sd1;
    sd1.show_data();
}