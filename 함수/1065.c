#include<stdio.h>

int hansu(int n){
	int result=0;
	int count;
	int i,j;
	int k;
	if(n<100){
		result = n;
		return result;
	}else if(n>=100 && n<=1000){
		count =0;
		for(k=100; k<=n; k++){
		
			i = k/100-(k/10)%10;
			j = (k/10)%10 - k%10;
			if(i == j){
				count++;
			}
		}
		result = 99 + count;
		return result;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int count = 0;
	count = hansu(n);
	printf("%d",count);
}
