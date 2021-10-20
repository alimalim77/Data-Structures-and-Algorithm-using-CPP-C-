#include<iostream>
using namespace std;

void fun(int *arr, int *arr2){
	for(int i=0; i<5;i++){
		int j=0,mul=1;
		while(j<5){
			if(i==j){
			j++;
			continue;
			}
			else{
			mul = mul * arr[j];
			j++;
			}
		}
		arr2[i]=mul;
	}
	for(int i=0; i<5;i++)
	cout << arr2[i] <<endl;
}

int main(){
	int arr[] = {1,2,3,4,5};
	int arr2[5];
	 
	fun(arr,arr2);
	return 0;
}
