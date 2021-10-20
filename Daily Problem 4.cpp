#include<iostream>
using namespace std;

void fun(int *arr, int size){
	int i=0,lowint;
	while(i<size){
		if(arr[i]<lowint && arr[i]>0)
		lowint=arr[i]+1;
		i++;
	}
	cout << lowint;
}


int main(){
	int size = 4;
	int arr[] = {3,4,-1,1};
	fun(arr,size);
	
	return 0;
}
