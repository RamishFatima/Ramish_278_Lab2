#include <limits.h>
#include "Matrix.h"
#include "gtest/gtest.h"

//Multiplication Test
TEST(AddTest2, Blah) 
{
 matrix m1,m2,m3;
 m1.input();
 m2.input();
 m3.multiply(m1,m2);

 int test[2][2];

 for(int i=0;i<2;i++)
 {
 	for(int j=0;j<2;j++)
 	{
 	test[i][j] = 8;
 	}
 }

 for(int i=0;i<2;i++){
     
 	   for(int j=0;j<2;j++){
                
 		EXPECT_EQ(m3.b[i][j],test[i][j]);
 		//cout<< m3.b[i][j]<<"\t";
 		      }
 				}
}
 

//Addition Test
TEST(AddTest3, Blah) {
 matrix m1,m2,m3;
 m1.input();
 m2.input();
 m3.addition(m1,m2);

 int test[2][2];

 for(int i=0;i<2;i++)
 {
 for(int j=0;j<2;j++)
 {
 test[i][j] = 32;
 }
 }

 for(int i=0;i<2;i++){
     
 	for(int j=0;j<2;j++){
                
 		EXPECT_EQ(m3.b[i][j],test[i][j]);
 		//cout<< m3.b[i][j]<<"\t";
 }
 }
 

}


//Subtraction Test
TEST(AddTest4, Blah) {
 matrix m1,m2,m3;
 m1.input();
 m2.input();
 m3.subtraction(m1,m2);

 int test[2][2];

 for(int i=0;i<2;i++)
 {
 for(int j=0;j<2;j++)
 {
 test[i][j] = 0;
 }
 }

 for(int i=0;i<2;i++){
     
 	for(int j=0;j<2;j++){
                
 		EXPECT_EQ(m3.b[i][j],test[i][j]);
 		//cout<< m3.b[i][j]<<"\t";
 }
 }
 

}

