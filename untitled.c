/*Name:sabina prajapati
Subject:
Lab no:
Program:Write a program 
Date:
*/
#include<stdio.h>
#include<math.h>
 int main(){
	int x,y,z,sum,avg,pr,a,b;
	printf("enter the value of x\n");
	scanf("%d",&x);
	printf("enter the value of y\n");
	scanf("%d",&y);
	printf("enter the value of z\n");
	scanf("%d",&z);
	sum=x+y+z;
	avg=(x+y+z)/3;
	pr=x*y*z;
	printf("the sum of the numbers is %d\n",sum);
	printf("the average of the numbers is %d\n",avg);
	printf("the product of the numbers is %d\n",pr);
	(x>y&&y>z)? printf("x is the greatest no\n"):
			(y>x&&x>z)?printf("y is the greatest no\n"):
					printf("z is the greatest no");
					
	(x<y&&y<z)? printf("x is the smallest no\n"):(y<x&&x<z)?printf("y is the smallest no\n"):printf("z is the smallest no");
		
		
			
			return(0);
		}
				
			
	
	
