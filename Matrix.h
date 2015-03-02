#include<iostream>
using namespace std;
class matrix
 {
 int a[10][10];
 
 int m,n;
 public:
 int b[10][10];
 void input();
 void output(); 
 
 void multiply(matrix,matrix);
 };
 void matrix::input()
 {
 m=2;
 n=2;
 for(int i=0;i<m;i++)
 {
 for(int j=0;j<n;j++)
 {
 a[i][j] = 1;
 }
 }
 } 
  
void matrix :: output()
 {
 for(int i=0;i<m;i++)
 {
 cout<<"\n";
 for(int j=0;j<n;j++)
 {
 cout<<b[i][j]<<"\t";
 }
 }
 }
 void matrix :: multiply(matrix m1, matrix m2)
 {
 if(m1.n!=m2.m)
    {
     cout<<"matrix multiplication is not possible";
    }
 else
    {
     for(int i=0;i<m1.m;i++)
    {
     for(int j=0;j<m2.n;j++)
    {
     a[i][j]=0;
     for(int k=0;k<m1.n;k++)
     {
     a[i][j]=a[i][j] +( m1.a[i][k]*m2.a[k][j]);
     b[i][j]= a[i][j];
     m=m1.m;
     n=m2.n;
    }
 }
 }
 }

 } 

