#include<iostream>
using namespace std;

class HelloWorld{
    public:
    HelloWorld(){
        cout<<"Constructor is called"<<endl;
    }
    //Deconstructor
    ~HelloWorld(){
        cout<<"Deconstuctor is called"<<endl;
    }
    //Memeber function
    void display(){
        cout<<"HelloWorld!"<<endl;
    }
    
};

int main(){
    //object created
    HelloWorld obj;
    //Member function called
    obj.display();
    return 0;
}
