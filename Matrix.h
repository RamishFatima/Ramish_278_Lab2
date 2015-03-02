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
 void addition(matrix,matrix);
 void subtraction(matrix,matrix);
 };
 void matrix::input()
 {
 m=2;
 n=2;
 for(int i=0;i<m;i++)
 {
 for(int j=0;j<n;j++)
 {
 a[i][j] = 16;
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


void matrix ::addition(matrix m1, matrix m2)
{
	int i,j;
	int sum[10][10];
	for ( i = 0 ; i < m1.m ; i++ )
        for ( j = 0 ; j < m1.n ; j++ )
	{
         sum[i][j] = m1.a[i][j] + m2.a[i][j];
	 b[i][j]=sum[i][j];
 	}
   	//cout<<"Sum of entered matrices:-\n";
 
   /*for ( i = 0 ; i < m1.n ; i++ )
   {
      for ( j = 0 ; j < m1.n ; j++ )
         cout<< sum[i][j]<<"\t";
 
     
   }*/

}
void matrix ::subtraction(matrix m1, matrix m2)
{
	int i,j;
	int sum[10][10];
	for ( i = 0 ; i < m1.m ; i++ )
        for ( j = 0 ; j < m1.n ; j++ )
	{
         sum[i][j] = m1.a[i][j] - m2.a[i][j];
	 b[i][j]=sum[i][j];
 	}
   	//cout<<"Sum of entered matrices:-\n";
 
  /* for ( i = 0 ; i < m1.n ; i++ )
   {
      for ( j = 0 ; j < m1.n ; j++ )
         cout<< sum[i][j]<<"\t";
 
     cout<<"\n";
   }*/
	
	


 } 

