#include<stdio.h>
#include<stdlib.h>

int main(){
	int num;
	scanf("%d",&num);
	int* arr;
	arr = (int*)malloc(sizeof(int)*num);
	for(int i = 0; i<num; i++){
		scanf("%1d",&arr[i]);
	}
	int sum = 0;
	for(int j = 0; j<num; j++){
		sum = sum+arr[j];
	}
	printf("%d",sum);
}
