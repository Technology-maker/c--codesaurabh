// destructure will rum bafter object will distroy

#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    ~complex()
    {
        cout << "destructure will be runnung. ";
    }
};

void fun()
{
    complex dis1;
}

int main()
{
    complex dis2;
    fun();
}




