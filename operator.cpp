// #include <iostream>
// using namespace std;

// class addition
// {
//     int n1, n2;

// public:
//     void add(int num1, int num2)
//     {

//         n1 = num1;
//         n2 = num2;
//     }

//     addition addnum(addition value2)
//     {
//         addition rvalue;
//         rvalue.n1 = n1 + value2.n1;
//         rvalue.n2 = n2 + value2.n2;
//         return rvalue;
//     }

//     void display()
//     {

//         cout << " n1 = " << n1 << endl
//              << "n2 = " << n2 << endl;
//     }
// };

// int main()
// {
//     addition value1, value2, value3;
//     value1.add(4, 7);
//     value2.add(7, 4);
//     value3 = value1.addnum(value2);
//     value3.display();
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

#include <iostream>
using namespace std;

class operate
{

    int x, y;

public:
    operate operator+(operate num1)
    {
        operate temp;
        temp.x = x + num1.x;
        temp.y = y + num1.y;
        return temp;
    };

    void datain(int n1, int n2)
    {
        x = n1;
        y = n2;
    }

    operate data_display(operate data){
        cout <<"x = "<<data.x<<endl<<"y = "<<data.y<<endl;
    }
};

int main()
{
    operate op1,op2,op3,op4;
    op2.datain(3,6);
    op3.datain(5,5);
    op1 = op2+op3;
    op4.data_display(op1);


}
