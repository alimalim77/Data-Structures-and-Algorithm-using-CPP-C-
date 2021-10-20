#include<stdio.h>
int simp(int, int, int);

int main(){
	int principal=100, rate=5, time=2;
	int total;
	
	total= simp(principal, rate, time);
	printf("Total is %d\n", total);
			
	return 0;
}

simp(int p, int r, int t){
	int sum;
	sum= (p * r * t)/100;
	return sum;
}
