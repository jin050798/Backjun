#include<stdio.h>
int main(){
	int test_num;
	int student_num;
	int *score;
	score = (int*)malloc(sizeof(student_num));
	printf("테스트 케이스의 개수를 입력하세요 : ");
	scanf("%d",&test_num);
	int k = 0;
	int i = 0;
	int j = 0;
	int l = 0;
	double t = 0;
	int total = 0;
	int avg = 0;
	int count1=0,count2=0;
	while(k<test_num){
		scanf("%d",&student_num);
		while(i<student_num){
			scanf("%d",score);
			i++;
		}
		while(j<student_num){
			total = total+score[j];
			j++;
		}
		avg = total/student_num;
		while(l<student_num){
			if(score[l]<avg){
				count1++;
			}else{
				count2++;
			}
			l++;
		}
		t = count2/student_num;
		printf("%f\n",&t);
		k++;
	}
}
