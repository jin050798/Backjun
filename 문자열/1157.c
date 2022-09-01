#include<stdio.h>
#include<string.h>
int main(){
	char arr[1000000];
	int len = 0;
	int alphaCount[26] = {0,};
	scanf("%s",arr);
	len = strlen(arr);
	for(int l = 0; l<len; l++){
		if(arr[l]<65||arr[l]>123){
			printf("잘못된 접근입니다");
			return 0;
		}
	}
	for(int i = 0; i<len; i++){
		if(arr[i]>90){
			arr[i] = arr[i] - 32;
		}
		alphaCount[arr[i] - 'A']++;
	}

	int max = 0;
	char alpha;
	for(int j = 0; j<26; j++){
		if(alphaCount[j] > max){
			max = alphaCount[j];
		}
	}
	int count = 0;
	for(int k = 0; k<26; k++){
		if(alphaCount[k] == max){
			alpha = k+'A';
			count++;
		}
	}
	if(count >=2){
		printf("?");
	}else{
		printf("%c",alpha);
	}
}
