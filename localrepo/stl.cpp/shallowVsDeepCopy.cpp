
// // // C++ program for the above approach
// // #include <iostream>
// // using namespace std;

// // // Box Class
// // class box {
// // private:
// //     int length;
// //     int breadth;
// //     int height;
// //       int *p;

// // public:
// //     // Function that sets the dimensions
// //     void set_dimensions(int length1, int breadth1,
// //                         int height1,int x)
// //     {
// //         length = length1;
// //         breadth = breadth1;
// //         height = height1;
// //           p=new int;
// //       *p=x;
// //     }

// //     // Function to display the dimensions
// //     // of the Box object
// //     void show_data()
// //     {
// //         cout << " Length = " << length
// //              << "\n Breadth = " << breadth
// //              << "\n Height = " << height
// //              << "\n P int pointing to = "<<p
// //              << endl;
// //     }
// //     box(box &obj){
// //         this->breadth=obj.breadth;
// //         this->height=obj.height;
// //         this->length=obj.length;
// //         // delete p;
// //         this->p=new int ;
// //         *(this->p)=*(obj.p);
// //     }
// // };
// // //SHALLOW COPY 

// // // Driver Code
// // int main()
// // {
// //     // Object of class Box
// //     box B1, B3;

// //     // Set dimensions of Box B1
// //     B1.set_dimensions(14, 12, 16,100);
// //     B1.show_data();

// //     // When copying the data of object
// //     // at the time of initialization
// //     // then copy is made through
// //     // COPY CONSTRUCTOR
// //     box B2 = B1; //SHALLOW COPY THROUGH COPY CONSTRUCTOR AT TIME OF INITIALIZATION
// //     B2.show_data();

// //     // When copying the data of object
// //     // after initialization then the
// //     // copy is done through DEFAULT
// //     // ASSIGNMENT OPERATOR
// //     B3 = B1;// B3 ALREADY INTIALIZED EARLIER COPY THROUGH ASSIGNMENT OPERATOR
// //     B3.show_data();

// //     return 0;
// // }
// // C++ program to demonstrate
// // the above concept
// // #include <iostream>
// // using namespace std;

// // int foo(int* y) { return *y; }

// // // Driver code
// // int main()
// // {
// //     int z = 8;
// //     const int* x = &z;
// //     cout << foo(x);
// //     return 0;
// // }
// //C++ program to demonstrate the above concept
// #include <iostream>
// using namespace std;

// void printfunc(int* ptr)
// {
//     cout << "Value :" << *ptr << endl;
//     cout << "Address of ptr :" << &ptr << endl;
// }
// //Driver Code
// int main()
// {
//     int x = 10;
//     int* const i = &x;
//     printfunc(i);
//     cout << "Address of i :" << &i << endl;
// }
struct Box {
    int length;
    int getLength() const { return length; } // ✅ safe
    const void bad() { length = 5; } // NO compile error
};

// shallow copy and deep copy 
';'
