#include"encrypt__.h"
//designed and developed by intfloatjohn,xxl.
float encrypt(float x_1,float x_2,float y_1,float y_2);//set a function
int main()//main funtion
{int a,b,c,d;
  a=2;
  b=3;
  c=5;
  d=7;//set encrypt type
  float chan;
 float a_,b_,c_,d_;
 printf("input serial number>");
 scanf("%f",&chan); //use Caesar encryption
 printf("choose encrypt type(1,2,3,4)>");
 int ty;
 float ty_;
 ty_=(float)ty;
 float tc;
 tc=ty_+chan;
 scanf("%d",&ty); //use different types(prime number）
 int hash_1,hash_2,hash_3;
 float hash_1_,hash_2_,hash_3_;
 printf("input hash num1(all the numbers should be integer>");
 scanf("%d",&hash_1);
 printf("hash num2>");
 scanf("%d",&hash_2);
 printf("hash num3>");
 scanf("%d",&hash_3);
 hash_1_=(float)hash_1;
 hash_2_=(float)hash_2;
 hash_3_=(float)hash_3;
 printf("input the text you want to encrypt:");
 int str,str0;
 scanf("%d",&str);
 str0=str+0;//change text to number
 float str_;
     str_=(float)str0;
 float hashedx2;
       hashedx2=(tc*tc*hash_1_)+(tc*hash_2_)+hash_3_;
 switch(ty){
   case 1:
   case 2:
   case 3:
   case 4:
     {printf("serial number:%f",chan);
       printf("\nencrypt type:%d",ty);
       printf("\nhash num1:%d",hash_1);
       printf("\nhash num2:%d",hash_2);
      printf("\nhash num3:%d",hash_3);
       encrypt(ty_,tc,str_,hashedx2);}break;
   default:{printf("bad command!");}
     break;
   return 0;
 }

  }
float encrypt(float x_1,float x_2,float y_1,float y_2)
{//use Quadratic functions as the hash function
float result; 
 float pt,pq,pr,ps;
  pt=y_1*x_2;
  pq=x_1*y_2;
  pr=pt-pq;
  ps=y_1-y_2;
  result=pr-ps;
  printf("\nencrypted text:%f",result);
  return 0;
}
