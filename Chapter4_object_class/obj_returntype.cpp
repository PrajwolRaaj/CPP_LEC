#include<iostream>
using namespace std;

class Student {
   public:
   double marks1,marks2;

};

Student createstudent(){
    Student student;


    student.marks1 = 150;
    student.marks2 = 170;

    cout<<"First marks =   " <<student.marks1<<endl;
    cout<<"Second marks =  "<<student.marks2<<endl;


}

int main(){
    Student student1;
    student1 = createstudent();
    return 0;
}