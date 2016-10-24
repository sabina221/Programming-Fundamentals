/*
student name:Sabina prajapati
subject:Programming fundamental
Lab no:
Program:write a program to take two inputs from user and print largest and smallest numbers using terminjal operstors
Date:24th october
*/

#include<stdio.h>
main(){
	int x,y,z;
	printf("enter the value of x\n");
	scanf("%d",&x);
	
	printf("enter the value of y\n");
	scanf("%d",&y);
	printf("enter the value of z\n");
	scanf("%d",&z);
	(x>y&&y>z)?printf("%d is the largest",x):(y>x&&x>z)?printf("%d is the largest",y):printf("%d is the largest",z);
	

	
}
