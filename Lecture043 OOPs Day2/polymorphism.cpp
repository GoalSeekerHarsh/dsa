#include<iostream>
using namespace std;

// class A {

//     public:
//     void sayHello() {
//         cout << "Hello Love Babbar" << endl;
//     }
    
//     int sayHello(char name) {// in one class we can only named same name to function iff it contain different arguement or different data_type of arguement 
//         cout << "Hello Love Babbar" << endl;
//         return 1;
//     }

//     void sayHello(string name) {
//         cout << "Hello " << name  << endl;
//     }

// };

// class B {
//     public:
//     int a;
//     int b;

//     public: 
//     int add() {
//         return a+b;
//     }

//     void operator+ (B &obj) {
//         int value1 = this -> a;
//         int value2 = obj.a;
//         cout << "output " << value2 - value1 << endl; 
        
//        cout << "Hello Babbar" << endl;
//     }

//     void operator() () {
//         cout << "main Bracket hu " << this->a << endl;
//     }

// };

// class Animal {
//     public:
//     void speak() {
//         cout << "Speaking "<< endl;
//     }
// };

// class Dog: public Animal {

//     public:
//     void speak() {
//         cout << "Barking " << endl;
//     }


// };



// int main() {

//     Dog obj;
//     obj.speak();





//     B obj1, obj2;

//     obj1.a = 4;
//     obj2.a = 7;

//     obj1 + obj2;
//     obj1();   // by this line no 43 will be execute   here obj whenever we say then this line execute bz we have provided operator just after obj1 this way our operator keyword designed 








// /*
//     A obj;
//     obj.sayHello();
//     */


//     return 0;
// }
// CollegeCourse Class
class CollegeCourse {
    string CID;
    char g;
    int cr;
     unordered_map<char, int>gradePoints={{'A',10},{'B',9},{'C',8},{'D',7},{'E',6},{'F',5}};
    // char gradePoints;
    //honorPoints=gradePoints*credits;
    void set_CourseId( string CID){
        this->CID=CID;
    }
    void set_Grade(char g){
        this->g=g;
    }
    void set_Credit(int cr){
        this->cr=cr;
    }
    int calculateGradePoints(char g){
       
        return gradePoints[g];
    }
    float calculateHonorPoints(int gp,int cr){
        //float honorPoints=gp*cr;
        return cr*gp;
        
    }
    void display(){
        cout<<gradePoints[g]<<" ";
        cout<<cr*g;

        
    }
};
int main(){
int *arr = new int[2];
 for(int i = 0; i < 2; ++i) {
    arr[i] = new int[2];
 }
    return 0;
}