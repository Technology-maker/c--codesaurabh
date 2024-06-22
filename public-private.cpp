// #include <iostream>
// #include <stdio.h>

// using namespace std;

// struct book
// {

// private:
//     char bookname[20];
//     float bookiprice;
//     int bookid;

// public:
//     void in_data()
//     {
//         cout << "enter book name. ";
//         gets(bookname);
//         cout << "enter book price. ";
//         cin >> bookiprice;
//         cout << "enter book id. ";
//         cin >> bookid;
//         cout << endl;
//     }

//     void display()
//     {
//         cout << "book name is = " << bookname << endl
//              << "book id is = " << bookid << endl
//              << "book price is = " << bookiprice;
//     }
// };

// int main()
// {

//     book firstbook;
//     firstbook.in_data();
//     firstbook.display();
// }
//
//
//
//
// function declared on structure outside
//
//

#include <iostream>
using namespace std;

struct swipe
{
private:
    int x, y;

public:
    void numberswipe(int n1, int n2);
};

void swipe:: numberswipe(int n1, int n2)
{
    x = n1;
    y = n2;

    cout << "sum of ftwo number is. " << x + y;
}

int main()
{

    int n1, n2;
    cout << "enter two number. ";
    cin >> n1 >> n2;

    swipe sw;
    sw.numberswipe(n1, n2);
}
