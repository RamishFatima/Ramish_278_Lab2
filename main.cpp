
#include <iostream>
#include "Matrix.h"

int main()
 {
 int array[10][10];
 int b;


 matrix m1,m2,m3,m4,m5,m6;
 m1.input();
 m2.input();
 m3.multiply(m1,m2);
 cout<<"The Multiplacated Matrix:"<<endl;
 m3.output();

cout<<endl;
cout<<"The Added Matrix:"<<endl;

 m1.input();
 m2.input();
 m3.addition(m1,m2);
 m3.output();
cout<<"\n";
cout<<"The Subtracted Matrix:"<<endl;

 m1.input();
 m2.input();
 m3.subtraction(m1,m2);
 m3.output();

 
 cout << endl;
return 0;
 } 
