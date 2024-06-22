#include <iostream>
using namespace std;

class first
{
    int n;

public:
    first(int a)
    {
        n = a;

        cout << "value of a = " << a << endl;
    }

    ~first()
    {
    }
};

class second : public first
{

    int b;

public:
    second(int x, int y) : first(y)
    {
        b = x;

        cout << "value of b = " << b;
    }
    ~second()
    {
    }
};

int main()
{

    second s1(3, 4);
}