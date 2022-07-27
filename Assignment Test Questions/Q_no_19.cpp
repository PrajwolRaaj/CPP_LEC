//Overriding example for Cpp

#include<iostream>


using namespace std;

class vehicle {
    public:
    void drive(){
        
        cout<<"Driving...";
        
    }
};

class car: public vehicle
{
    public:
    void drive()
    {
        cout<<"Driving on road";
    }
};
int main(void){
    car c = car();
    c.drive();
    return 0;
}