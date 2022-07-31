#include <stdio.h>

void bubbleSort(int arr[],int size){
	int temp;
	for(int i=0;i<size-1;i++){
		for(int j=0;j<size-i-1;j++){
			if(arr[j]>arr[j+1])
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = arr[j]; 
		}
	}
}



int main(){
	int arr[] = {7,4,2,8,4,6};
	bubbleSort(arr,6);

	for (int i = 0; i < 6; ++i)	{
		printf("%d ",arr[i]);
	}




	return 0;

}