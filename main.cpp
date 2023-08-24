#include <iostream>
#include <stdio.h>

using namespace std;


    ///////////////////
    //ARRAYS
    ///////////////////
/*
    int n;
    cout<<"enter size";
    cin>>n;

    int A[n] = {2,4,6,8,10, 12}; Error, cannot initialize, can declare
    int A[n];

for loop

    for(int i = 0; i < 10; i++) {
       cout<<A[i]<<endl;
    }

for each loop

    for(int x:A) {
        cout<<x<<endl;
    }

     int takes 4 bytes

    */

    ///////////////////
    //STRUCTURES
    ///////////////////
//    struct Rectangle {
//        int length;
//        int breadth;
//        char x;
//    };
//
//
//    struct Rectangle r1 = {10,5};
//
//        r1.length = 15;
//        r1.breadth = 7;
//
//        cout << r1.length << endl;
//        cout << r1.breadth << endl;
//

    ///////////////////
    //POINTERS
    ///////////////////
//    int a = 10;
//    int *p;
//    p = &a;
//
//    cout << a << endl
//         << p << endl
//         << &a << endl
//         << *p << endl;

//    int A[5] = {2,4,6,8,10};
//    int *p;
//    p = A; // no & for referencing array
//    p = (int *) malloc(5*sizeof(int)); // C method
//    p = new int[5]; // C++ method
//    p[0] = 10; p[1] = 15; p[2] = 14; p [3] = 21; p[4] = 31; // array inside of heap
//
//    for (int i = 0; i < 5; i++) {
//        cout << p[i] << endl;
//    }
//    delete [] p; // C++ method // deleting memory after use
//    free(p); // C method

//    struct Rectangle {
//        int length;
//        int breadth;
//        char x;
//    };
//
//    int *p1;
//    char *p2;
//    float *p3;
//    double *p4;
//    struct Rectangle *p5;
//
//        cout << sizeof(p1) << endl;
//        cout << sizeof(p2) << endl;
//        cout << sizeof(p3) << endl;
//        cout << sizeof(p4) << endl;
//        cout << sizeof(p5) << endl;
//    // all pointers are 8 bytes

    ///////////////////
    //REFERENCE
    ///////////////////
//        int a = 10;
//        int &r = a;
//
//        int b = 30;
//        r = b;
//
//
//        cout<<a<<endl<<r<<endl;

    ///////////////////
    //POINTER TO STRUCTURE
    ///////////////////

    struct Rectangle {
        int length;
        int breadth;
    };

// Pointer to struct syntax
//    Rectangle r = {10,5};
//    cout << r.length << endl;
//    cout << r.breadth << endl;
//
//    Rectangle *p = &r;
//    cout << p->length<<endl;
//    cout << p->breadth<<endl; // syntax for pointer to structure

// Creating struct in heap
//    Rectangle *p;
//    p = (struct Rectangle *)malloc(sizeof(struct Rectangle)); // C syntax
//    p = new Rectangle; // C++ syntax
//    p->length=15;
//    p->breadth=7;
//
//    cout << p->length<<endl;
//    cout << p->breadth<<endl;
int main() {
//FUCNTIONS
cout << "hello";
    return 0;
}
