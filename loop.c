/*Name:sabina prajapati
Subject:
Lab no:
Program:Write a program to print the sum of the natural numbers 
Date:
*/
#include<stdio.h>
int main()
{
	int i=0,n,sum=0 ;
	
	printf("the nos of natural numbers\n");
	scanf("%d",&n);
	
	do{
		sum+=i;
		i++;
		} 
		while(i<=n);
	
	printf("the sum of natural numbers %d\n",sum);
	

return 0 ;

}
