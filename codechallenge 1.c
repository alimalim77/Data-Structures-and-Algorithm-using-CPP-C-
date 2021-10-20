#include<stdio.h>

int main(){
	char name[25]= "Alim";
	float i[]={22,33,634,14,71,24};
	int j;
	float tot;
	tot= sizeof(i)/sizeof(float);
	float smallest,secsmall;
	
	smallest= i[0];
	
	for(j=0; j<tot; j++){
		if(i[j] < smallest)
		smallest=i[j];
	}
	secsmall=i[0];
	for(j=0; j<tot; j++){
		if(i[j] < secsmall && i[j] > smallest )
		secsmall=i[j];
	}
	
	
	printf("Smallest is %f and second smallest is %f in %c\n",smallest, secsmall, name[0]);
	}
	
