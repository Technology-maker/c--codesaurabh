#include <iostream>
using namespace std;

void bigfun();
int area(int rad);
int area(int length, int breath);

int main()

{
    int fun;
    cout << "press one to enter the function. ";
    cin >> fun;
    if (fun == 1)
    {
        bigfun();
    }
    else
    {
        cout << "invalid operation";
    }
}
void bigfun()
{
    int radious, choice, l, b;

    cout << "(1) press one to finding the area of a circle ." << endl;
    cout << "(2) press two to finding the area of a rectangle ." << endl;
    cout << "enter your choice. ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "enter the radious of circle.";
        cin >> radious;

        cout << "aarea of circle is = " << area(radious);
    }
    else if (choice == 2)
    {
        cout << "enter the length and breath of retangle.";
        cin >> l >> b;

        cout << "area of retaangle is = " << area(l, b);
    }
}

int area(int rad)
{
    return 3.14 * rad * rad;
}
int area(int length, int breath)
{
    return length * breath;
}