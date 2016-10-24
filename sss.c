/*
student name:Sabina prajapati
subject:Programming fundamental
Lab no:
Program:write a program to find roots of quadratic equation using if else
Date:24th october
*/
#include<stdio.h>
#include<math.h>
 int main(){
	float a,b,c,r1,r2,d;
	printf("enter the value of coefficient a\n");
	scanf("%f",&a);
	printf("enter the value of coefficient b\n");
	scanf("%f",&b);
	printf("enter the value of coefficient c\n");
	scanf("%f",&c);
	d=sqrt(pow(b,2)-4*a*c);
	printf("the discriminant is %f\n",d);
	
	if(d>0){
		r1=(-b+d)/(2*a);
	   r2=(-b-d)/(2*a);
		
		printf("roots are %.2f and %.2f\n",r1,r2);t
		
	}
		else{
			printf("the roots are imaginary\n");
		}
return(0);
	}
