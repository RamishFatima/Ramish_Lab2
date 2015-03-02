
#include <iostream>
#include "Matrix.h"

int main()
 {
 int array[10][10];
 int b;

 matrix m1,m2,m3,m4;
 m1.input();
 m2.input();
 m3.multiply(m1,m2);
 m3.output();

 
 cout << endl;
return 0;
 } 
