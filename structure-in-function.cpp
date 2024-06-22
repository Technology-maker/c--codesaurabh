#include <iostream>
using namespace std;

struct biodata
{
    private:
    string name;
    int age;
    float id;

    public:
    void function()
    {
        cout << "enter your name , age ,id.";
        getline(cin, name);
        cin >> age >> id;
    }

    void display()
    {
        cout << "your name is = " << name << endl
             << "your age = " << age << endl
             << "your id number = " << id << endl;
    }
};

int main()
{
    biodata store;

    store.function();

    store.display();
}


