/*
student name:Sabina prajapati
subject:Programming fundamental
Lab no:
Program:write a program to take two inputs from user and print largest and smallest numbers using terminjal operstors
Date:24th october
*/

#include<stdio.h>
main(){
	int x,y,z,b;
	printf("enter the value of x\n");
	scanf("%d",&x);
	printf("enter the value of y\n");
	scanf("%d",&y);
	z=(x>y)?x:y;
	b=(x<y)?x:y;
	
	printf("%d is the largest number\n",z);
    printf("%d is the smallest number\n",b);
	
}
