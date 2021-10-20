#include<iostream>
using namespace std;

int fun(int arr[], int k){
	int i=0;
	while(i<5){
		for(int j =0; j<5; j++){
			if(arr[i]+arr[j]==k){	
			return k;
			}
		}
		i++;
	}
	return 0;
}

int main(){
	int arr[]= {1,5,35,65,23};
	int k=39,b;
    b = fun(arr,k);
    cout << b;
    return 0;
}

