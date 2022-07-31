#include <stdio.h>

int binSearch(int arr[],int size,int s){
	int l = 0;
	int mid;
	int h = size;
	int flag = 0;
	while(l<=h){
		mid = (l+h)/2;
		if(arr[mid] == s){
			flag = 1;
			break;
		}
		else if(arr[mid]>s){
			l = mid+1;
		}
		else{
			h = mid-1;
		}
	}
	return flag;
}

int main(){

	int arr[] = {7,8,6,4,9,3,2};
	int flag = binSearch(arr,7,35);

	if(flag == 0) printf("Not Found");
	else printf("Found");

	return 0;
}