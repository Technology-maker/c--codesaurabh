#include <iostream>
using namespace std;

struct biodata
{
    string name;
    int age;
    float id;
};

biodata function();
biodata dispay( biodata store);

int main()
{
    biodata store;

    store = function();

    dispay(store);
}


biodata dispay(biodata store){
    cout<<"your name is = "<<store.name<<endl<<"your age = "<<store.age<<endl<<"your id number.";
}


biodata function()
{
    biodata student2;
    cout << "enter your name , age ,id.";
    getline(cin, student2.name);
    cin >> student2.age >> student2.id;
    return student2;
}