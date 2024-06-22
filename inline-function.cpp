#include <iostream>
using namespace std;

inline int yadavji(int, int, int = 0);

int main()
{
    int x, y;
    cout << "enter the two number .";
    cin >> x >> y;

    cout << "sum of two number is ." << yadavji(x, y)<< endl;

    int z;
    cout << "enter three number .";
    cin >> x >> y >> z;

    cout << "sum of three number is " << yadavji(x, y, z) << endl;
}

int yadavji(int x, int y, int z)
{
    return (x + y + z);
}
