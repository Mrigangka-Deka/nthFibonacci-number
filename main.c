/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
int main()
{
int n, n1 = 0, n2 = 1, nextTerm = 0, i;
printf("Enter the n value: ");
scanf("%d", &n);
if(n == 0 || n == 1) 
printf("%d", n); 
else
nextTerm = n1 + n2;
for (i = 3; i <= n; ++i)
{
n1 = n2;
n2 = nextTerm;
nextTerm = n1 + n2;
}
printf("%d", n2);
return 0;
}