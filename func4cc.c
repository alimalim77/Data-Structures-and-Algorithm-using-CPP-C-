#include<stdio.h>
void first(int,int,int);
void second(int,int,int);

int main(){
	int score1, score2, score3;
	printf("Enter the score of Player 1\n");
	scanf("%d",&score1);
	printf("Enter the score of player 2\n");
	scanf("%d",&score2);
	printf("Enter the score of player 3\n");
	scanf("%d",&score3);
	first(score1,score2,score3);
	return 0;
}

void first(int p1,int p2,int p3){
    float avg;
	avg=(p1+p2+p3)/3;
	printf("Average is %f\n", avg);
	second(p1,p2,p3);
}

void second(int p1, int p2, int p3){
	if(p1>p2){
		if(p1>p3)
		printf("p1 score is highest\n");
		else
		printf("p3 score is highest\n");
	}
	else
	{
		if(p2>p3)
		printf("p2 score is highest\n");
		else
		printf("p3 score is highest\n");
	}
}
