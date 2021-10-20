#include<stdio.h>
void first(int*,int*,int*,int*);
//void second(int,int,int);

int main(){
	int score1, score2, score3, score4;
	printf("Enter the score of Player 1\n");
	scanf("%d",&score1);
	printf("Enter the score of player 2\n");
	scanf("%d",&score2);
	printf("Enter the score of player 3\n");
	scanf("%d",&score3);
	printf("Enter the score of player 4\n");
	scanf("%d",&score4);
	first(&score1,&score2,&score3,&score4);
	printf("Values are %d and %d and %d and %d\n",score1, score2, score3, score4);

	return 0;
}

void first(int *score1, int *score2, int *score3, int *score4){
	*score1= *score1 * 4;
	*score4= *score4 * 4;
	*score3= *score3 / 2;
	*score2= *score2 / 2;
}

