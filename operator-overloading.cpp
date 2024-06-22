#include <iostream>
using namespace std;

class opoverload
{

    int number;

public:
    void data_in(int n1)
    {
        number = n1;
    }

    void data_show()
    {
        cout << "number =  " << number << endl;
    }

    opoverload operator++()
    {
        opoverload temp;
        temp.number = number++;
        return temp;
    }

    opoverload operator++(int)
    {
        opoverload temp;
        temp.number = ++number;
        return temp;
    }
};

int main()
{
    opoverload opr1, opr2;
    opr1.data_in(5);
    opr1.data_show();
    opr2 = ++opr1;
    opr2.data_show();
    opr2 = opr1++;
    opr2.data_show();
}