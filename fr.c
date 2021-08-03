/*SHISIR PANDEY 20BCE2873*/
#include<stdio.h>
int find_factorial(int);
int main()
{
   int num, fact;

   printf("\nEnter the number of which you want the factorial:\n");
   scanf("%d",&num);
   fact =find_factorial(num);
   printf("\nfactorial of %d is: %d",num, fact);
   return 0;
}
int find_factorial(int n)
{
   if(n==0)
      return(1);

   //Function calling itself: recursion
   return(n*find_factorial(n-1));
}
