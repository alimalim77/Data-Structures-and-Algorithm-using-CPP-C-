#include<stdio.h>
struct student{
	char reg_no[15] ;
	float bnd1,bnd2,bnd3;
}btech;

float avg(struct student*);

int main(){
	float aver;
	printf("Enter the registration number:\t");
	scanf("%s",&btech.reg_no);
	printf("\nEnter the value of  Band 1:\t");
	scanf("%f",&btech.bnd1);
	printf("\nEnter the value of  Band 2:\t");
	scanf("%f",&btech.bnd2);
	printf("\nEnter the value of  Band 3:\t");
	scanf("%f",&btech.bnd3);
	aver= avg(&btech);
	printf("\nTHE AVERAGE IS %f\t",aver);
	return 0;
}

float avg(struct student *aver){
	float average;
	printf("%f\t%f\t%f",aver->bnd1,aver->bnd1,aver->bnd3);
	average = (aver->bnd1 + aver->bnd2 + aver->bnd3)/3;
	return average;
}
