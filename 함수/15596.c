#include<stdio.h>
#include<stdlib.h>
int sum_arr(int n, int* arr);
int main(){

	int n;
	int *arr;
	int i=0;
	int sum =0;
	printf("합을 구해야 하는 정수를 입력하시오 : ");
	scanf("%d",&n);
	arr = (int*)malloc(sizeof(int)*n);
	while(i<n){
		scanf("%d",&arr[i]);
		i++;
	}
	sum = sum_arr(n,arr);
	printf("%d",sum);
}
int sum_arr(int n, int* arr){
	int sum = 0;
	int i = 0;
	while(i<n){
		sum = sum + arr[i];
		i++;
	}
	return sum;
}
