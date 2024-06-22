#include <iostream>
using namespace std;

class mixturer{
    int x,y;
   public:
   
    
    ~mixturer(){
        cout <<"destructure will run first. "<<endl;
    }
    mixturer(){
        cout <<"constructor will run first"<<endl;
    }

};

int main(){
    mixturer c1;
}