#include<stdio.h>

int main(){
	int num1,num2;

	scanf("%d%d",&num1,&num2);

	int sang_num1,sang_num2;
	int num1_100 = num1/100;
	int num2_100 = num2/100;
	sang_num1 = (num1%10)*100 + num1_100 + (num1-num1_100*100)-num1%10;
	sang_num2 = (num2%10)*100 + num2_100 + (num2-num2_100*100)-num2%10;

	if(sang_num1>sang_num2){
		printf("%d",sang_num1);
	}else{
		printf("%d",sang_num2);
	}
}
