// SMART-CALCULATOR-IN-C
#include<stdio.h>
 int main(){
 int choice;
 float a,b;
 do {
 printf("\n1: addition");
 printf("\n2: substraction");
printf("\n3: multiplication");
printf("\n4: divison");
printf("\n5: exit");
printf("enter your choice");
scanf("%d",&choice);
switch(choice){
case 1:
printf("enter two number");
scanf("%f %f",&a,&b);
printf("Addition =%.2f",a+b);
break;
case 2:
printf("enter two number");
scanf("%f %f",&a,&b);
printf("substraction =%.2f",a-b);
break;
case 3:
printf("enter two number");
scanf("%f %f",&a,&b);
printf("multiplication=%.2f",a*b);
break;
case 4:
printf("enter two number");
scanf("%f %f",&a,&b);
printf("division =%.2f",a/b);
break;
case 5:
printf("exit");
break;
default:
printf("invalid choice");
break;
}
}while(choice!=5);
return 0;
}




    