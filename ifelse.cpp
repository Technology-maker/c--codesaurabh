// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     int cheak = 0;
//     cout << "enter the number to chaek that is prime or not . ";
//     cin >> num;

//     for (int i = 1; i <= num; i++)
//     {
//         if (num % i == 0)
//         {
//             cheak++;
//         }
//     }

//     if (cheak == 2)
//     {
//         cout << num << " is prime number .";
//     }
//     else
//     {
//         cout << num << " is composit number. ";
//     }
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

// #include <iostream>
// using namespace std;
// int main()
// {
//     int number, sum = 0,i;
//     cout << "enter a number";
//     cin >> number;
//    while(number >0){
//     number =  number%10;
//     sum++;
//    }
//    cout<<sum<<" number";
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

// #include <iostream>
// using namespace std;
// int main()
// {
//     int av;
//     char ch = 'a';

//     for (ch; ch <= 'z'; ch++)
//     {
//         cout<<ch<<" ";

//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int row = 10;
//     cout << "enter the row .";
//     cin >> row;

//     for (int i = row; i >= 1; i--)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << i;
//         }
//         cout << "\n";
//     }
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

// #include <iostream>
// #include <cmath>

// using namespace std;

// int sum(int x, int y);
// int findroot(int findroot);

// int main()
// {

//     int root, y, x, cheak = 0;

//     int findroot(int findroot);

//     cout << "(1) to find root of a number. " << endl;
//     cout << "(2) to find sum of two number. " << endl;
//     cin >> cheak;

//     if (cheak == 1)
//     {
//         cout << "enter the number to find square root .";
//         cin >> root;
//         cout << findroot(root) << " root of given number."<<endl;
//         cout<<sqrt(root);
//     }
//     else if (cheak == 2)
//     {
//         cout << "enter two number to add sum of two number.";
//         cin >> x;
//         cin >> y;
//         cout << sum(x, y) << " sum of two number.";
//     }
//     else
//     {
//         cout << "Invalid option !";
//     }
// }

// int sum(int x, int y)
// {
//     return x + y;
// }

// int findroot(int findroot)
// {
//     int ans;
//     ans = sqrt(findroot);
//     return ans;
// }

//
//
//
//
//
//
//

// #include <iostream>
// using namespace std;
// int fact(int n);
// int main()
// {
//     int n;
//     cout << "enter the number to find the factorial .";
//     cin >> n;
//     cout << fact(n);
// }

// int fact(int n)
// {
//     int store;
//     if (n == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return n * fact(n - 1);
//     }
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

// return something function

// #include <iostream>
// using namespace std;

// int addition(int n1, int n2);
// int subtract(int n1, int n2);
// int multyply(int n1, int n2);
// int devision(int n1, int n2);

// int main()
// {

//     while (1)
//     {
//         int num1, num2, choice, solution;
//         cout << "\n\n(1) for addition two number ." << endl;
//         cout << "(2) for subtraction two number ." << endl;
//         cout << "(3) for multiply of two numbe." << endl;
//         cout << "(4) for devision of two number." << endl;
//         cout << "enter your choice.";
//         cin >> choice;
//         cout << "enter first number .";
//         cin >> num1;
//         cout << "enter second number .";
//         cin >> num2;
//         if (choice == 1)
//         {
//             solution = addition(num1, num2);
//             cout << solution << "";
//         }
//         else if (choice == 2)
//         {
//             solution = subtract(num1, num2);
//             cout << solution << "";
//         }
//         else if (choice == 3)
//         {
//             solution = multyply(num1, num2);
//             cout << solution << "";
//         }
//         else if (choice == 4)
//         {
//             solution = devision(num1, num2);
//             cout << solution << "";
//         }
//         else
//         {
//             cout << "invalid choice !";
//         }
//     }
// }

// // functions

// int addition(int n1, int n2)
// {
//     return n1 + n2;
// }

// int subtract(int n1, int n2)
// {
//     return n1 - n2;
// }

// int multyply(int n1, int n2)
// {
//     return n1 * n2;
// }

// int devision(int n1, int n2)
// {
//     return n1 / n2;
// }

// #include <iostream>
// using namespace std;

// int sum(int n);

// int main()
// {
//     int n;
//     cout << "enter the number .";
//     cin >> n;

//     cout << sum(n);
// }

// int sum(int n)
// {
//     int store = 0;
//     if (n == 1)
//     {
//         return 1;
//     }
//     else
//     {

//         return n + sum(n - 1);
//     }
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int num,store;
//     cout<<"enter the number to find the sum of n number .";
//     cin>>num;

//     store = num*(num + 1)/2;

//     cout <<store<<"";

// }
//
//
//
//
//
//
//
//

// #include <iostream>
// #include <cmath>
// using namespace std;
// int power(int a, int b);
// int main()
// {

//     int a = 2, b = 3;

//     cout << power(a, b) << "";
// }

// int power(int a, int b)
// {
//     if (b == 0)
//     {
//         return 1;
//     }

//     else
//     {

//         return a * power(a, b - 1);
//     }
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

// #include <iostream>
// using namespace std;
// int main(){
//     int n1,n2,nextterm,term;
//     cout<<"enter your terms.";
//     cin>>term;
//     n1 = 0;
//     n2 = 1;
//     cout <<n1<<"\n"<<n2<<endl;
//     for (int i = 2; i <= term; i++){
//         nextterm = n1 + n2;
//         cout<<nextterm<<endl;
//         n1 = nextterm;
//     }

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

// #include <iostream>
// using namespace std;

// int fibonachi(int n);

// int main(){
//     int n =10;

//     cout <<fibonachi(n);
// }

// int fibonachi(int n){
//     if(n == 1 || n == 2)return 1;
//     return fibonachi(n-1) + fibonachi(n-2);
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[5] = {10, 20, 30, 40, 50};
//     int cheak, i;
//     cout << "enter the number to cheak the number in array. ";
//     cin >> cheak;

//     for (i = 0; i < 5; i++)
//     {
//         if (arr[i] == cheak)
//         {
//             cout << "item found at " << i << endl;
//             exit(1);
//         }
//     }

//     if (i <= 6)
//     {
//         cout << "item was not found !";
//     }
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

// #include <iostream>
// using namespace std;

// void valuec(int arr[]);

// int main()
// {

//     int arr[5] = {1, 2, 3, 4, 5};
//     cout << arr[0] << endl;
//     valuec(arr);
//     cout << arr[0] << endl;
// }
// void valuec(int arr[])
// {
//     arr[0] = 10;
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

// #include <iostream>
// using namespace std;

// int sum(int array[],int n);

// int main()
// {
//     int n;
//     cout<<"enter the size of array";
//     cin>>n;
//     int array[n];

//     cout << "enter element of array. ";

//     for (int i = 0; i < n; i++)
//     {
//         cin >> array[i];
//     }

//     cout << "sum of arrays are = " << sum(array,n);
// }

// int sum(int array[] ,int n)
// {
//     int add = 0;
//     for (int i = 0; i < n; i++)
//     {
//         add = add + array[i];
//     }
//     return add;
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

// #include <iostream>
// #include <cmath>
// using namespace std;

// int main()
// {
//     int array[] = {3,7,7,3,9,3,2,5,7,8};

//     int maximum = array[0];

//     int arrlen = sizeof(array)/4;

//     for(int i = 0; i < arrlen;i++){
//         maximum = max(maximum ,array[i]);
//     };

//     cout<<maximum;

// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {1, 6, 7, 3, 9};
//     int size = sizeof(arr) / 4;
//     int twice;

//     cout << arr[0];

//     for (int i = 1; i < size; i++)
//     {
//         if (arr[i] % 2 == 1)
//         {
//             cout << arr[i] * 2 << " ";
//         }

//     }
//     cout<<"\n";

//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] % 2 == 0)
//         {
//             arr[i] = arr[i] + 10;
//             cout << arr[i] << " ";
//         }
//     }
// }

// #include <iostream>
// #include <cmath>
// using namespace std;
// int main()
// {
//     int array[] = {3, 5, 8, 2, 6, 8, 5}, lenth,n;
//     lenth = sizeof(array) / 4;
//     cout<<"enter the number (n).";
//     cin>>n;

//     for (int i = 0; i<lenth; i++){

//         if (array[i]>n){
//             cout<<array[i];
//         }
//     }
// }

#include <iostream>
using namespace std;
int main()
{
    int arr[3][4], i, j;
    cout << "enter the array elements. ";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout<<"\n";

    for (int i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cout << arr[i][j];
        }
    }
}




