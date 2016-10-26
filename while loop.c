/*
Student name: sabina prajapati
Roll:
Subject:programming fundamentals
lab:
program:write a c program to print the factorial of any numbers provided by the users using
 while loop
Date:26th october
*/
#include<stdio.h>
int main(){
	int n,fact=1;
	printf("enter the number\n");
	scanf("%d",&n);



	while(n!=0){
	
fact*=n;
--n;
}
	printf("the factorial of the numbers is %d",fact);
}

	
