#include<stdio.h>
int main()
{
float a,b;
char op;
printf("Enter first number:");
scanf("%f",&a);
printf("Enter second number:");
scanf("%f",&b);
printf("Enter the operator(+ - * /):");
scanf("%c",&op);
switch(op)
{
case'+':
printf("Result=%2f\n",a+b);
break;
case'-':
printf("Result=%2f\n",a-b);
break;
case'*':
printf("result=%2f\n",a*b);
break;
case'/':
if(b!=0)
printf("result=%2f\n",a/b);
else
printf("cannot divide by zero.\n");
break;
default:
printf("Invalid operator\n");
}
return 0;
}




