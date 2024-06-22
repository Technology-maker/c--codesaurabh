#include <iostream>
using namespace std;

class add
{

    int a, b;

public:
    void addition(int x, int y)
    {
        a = x;
        b = y;
    }
    void dispaly()
    {
        cout << "sum of two number is " << a + b << endl;;
    }
    
};

int main()
{
    int x, y;
    add sum; // sum is an object
    cout << "enter two number. ";
    cin >> x >> y;
    sum.addition(x, y);
    sum.dispaly();
}