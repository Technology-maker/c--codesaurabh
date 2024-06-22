// #include <iostream>
// using namespace std;

// int add(int, int, int = 0);
// int add(int num1, int num2, int num3);

// int main()
// {
//     int num1, num2, store;
//     cout << "enter  two number. ";
//     cin >> num1 >> num2;

//     store = add(num1, num2);
//     cout << "sum of two nummber is " << store<<endl;

//     int num3;

//     cout << "enter three number. ";
//     cin >> num1 >> num2 >> num3;
//     store = add(num1, num2, num3);
//     cout << "sum of three number is " << store;
// }

// int add(int x, int y, int z)
// {
//     return x + y;
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

// struct student
// {

//     char name[20];
//     long long pn;
//     int marks;
//     int stclass;
//     int i = 0;
//     long ph2 = pn;

//     void biodata()
//     {
//         cout << "enter your name.";
//         cin >> name;

//         cout << "enter your phone number (without +91). ";
//         cin >> pn;

//         do
//         {
//             pn /= 10;
//             ++i;
//         } while (pn != 0);

//         if (i == 10)
//         {
//             cout << "enter your marks (0 to 100). ";
//             cin >> marks;
//             if (marks <= 100 && marks >= 0)
//             {
//                 cout << "enter your class(1 to 12). ";
//                 cin >> stclass;

//                 if (stclass <= 12 && stclass >= 0)
//                 {
//                     display();
//                 }
//                 else
//                 {
//                     cout << "please enter correct class !";
//                 }
//             }
//             else
//             {
//                 cout << "please enter correct marks !";
//             }
//         }
//         else
//         {
//             cout << "please enter  correct number !";
//         }
//     }

//     void display()
//     {
//         cout << "your name is " << name << endl
//              << "your marks is " << marks << endl
//              << "your class = " << stclass;
//     }
// };

// int main()
// {
//     student s1;
//     s1.biodata();
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
//

#include <iostream>
using namespace std;

class a
{

    int n1, n2;

public:
    void data_set(int f1, int s1)
    {
        n1 = f1;
        n2 = s1;
    };
};

class b :public a
{
    void data_transfer(int h1,int h2)
    {
        data_set(3,5);
    }
};
int main()
{
}
