#include<stdio.h>
#include<string.h>

int main(){
	char arr[15];
	scanf("%s",arr);
	int len = strlen(arr);
	int i;
	int sum = 0;
	for(i = 0; i<len; i++){
		if(arr[i] == 'A' || arr[i] == 'B' || arr[i] == 'C'){
			sum = sum + 3;
		}else if(arr[i] == 'D' || arr[i] == 'E' || arr[i] == 'F'){
			sum = sum + 4;
		}else if(arr[i] == 'G' || arr[i] == 'H' || arr[i] == 'I'){
			sum = sum + 5;
		}else if(arr[i] == 'J' || arr[i] == 'K' || arr[i] == 'L'){
			sum = sum + 6;
		}else if(arr[i] == 'M' || arr[i] == 'N' || arr[i] == 'O'){
			sum = sum + 7;
		}else if(arr[i] == 'P' || arr[i] == 'Q' || arr[i] == 'R' || arr[i] == 'S'){
			sum = sum +8;
		}else if(arr[i] == 'T' || arr[i] == 'U' || arr[i] == 'V'){
			sum = sum + 9;
		}else if(arr[i] == 'W' || arr[i] == 'X' || arr[i] == 'Y' || arr[i] == 'Z'){
			sum = sum + 10;
		}
	}
	printf("%d",sum);

}
