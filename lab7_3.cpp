#include<iostream>
#include<cmath>

int adiff(int A,int B){
int C;
C = A-B;
C = abs(C);
if (C%360<=180){
   return C%360;
   }else{
   return 360-(C%360);
   }
  } 