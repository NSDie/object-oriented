#include <stdio.h>
#include <math.h>
int main()
{
 int a,b,c,d,e;
 scanf("%d %d",&a,&b);
 c=a+b;
 d=a+b;
 int flag=0;
 while(c)
 {
  c/=10;
  flag++;           
 }
 if(d>=0)
 {
 if(flag<=3)
  printf("%d",d);
 else if(flag<=6&&flag>3)
  
  printf("%d,%03d",d/1000,d%1000);
  
 else 
   {
   e=d/1000000;
   printf ("%d,%03d,%03d",d/1000000,(d-e*1000000)/1000,(d-e*1000000)%1000);
   }
 }
 else
 {
 if(flag<=3)
  printf("%d",d);
 else if(flag<=6&&flag>3)
  
  printf("%d,%03d",d/1000,-d%1000);
  
 else 
   {
   e=d/1000000;
   printf ("%d,%03d,%03d",d/1000000,-(d-e*1000000)/1000,-(d-e*1000000)%1000);
   }
 }
 getchar();
 getchar();
 getchar(); 
 getchar(); 
 getchar();
}

