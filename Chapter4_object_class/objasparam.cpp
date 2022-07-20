<<<<<<< HEAD
// C++ program to calculate the average marks of two students

#include <iostream>
using namespace std;

class Student {

   public:
    double marks;

    // constructor to initialize marks
    Student(double m) {
        marks = m;
    }
};

// function that has objects as parameters
void calculateAverage(Student s1, Student s2) {

    // calculate the average of marks of s1 and s2 
    double average = (s1.marks + s2.marks) / 2;

   cout << "Average Marks = " << average << endl;

}

int main() {
    Student student1(50.6), student2(40.5);

  //objects as arguments
   calculateAverage(student1, student2);

    return 0;
=======
// C++ to calculate the average area  of four wall of a room


#include <iostream>

using namespace std;

class wall{
    public:
    float area;


    wall(float a){
        area = a;
    }
};


    void calculateAverage(wall w1, wall w2, wall w3, wall w4){
        float average = ( w1.area + w2.area + w3.area + w4.area)/4;

        cout<<"Average area of a wall is "<<average;

    }



    


int main(){
    wall w1(25.6), w2(24.8), w3(34.5), w4(35.6);

    calculateAverage(w1, w2, w3, w4);

    return 0;



>>>>>>> bbd64b484a8d797df9cb470cbdde1c27d52536a1
}