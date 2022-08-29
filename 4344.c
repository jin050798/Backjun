#include<stdio.h>
#include<stdlib.h>

int main(){
	int test_num;
	int student_num;
	int *score;
	printf("테스트 케이스의 개수를 입력하세요 : ");
	scanf("%d",&test_num);
	int k = 0;
	int i;
	int j;
	int l;
	double t;
	int total;
	double avg;
	int count1;
	while(k<test_num){
		count1 = 0;
		i=0;
		t=0;
		j=0;
		l=0;
		total = 0;
		avg = 0;
		scanf("%d",&student_num);
		score = (int*)malloc(sizeof(int)*student_num);
		while(i<student_num){
			scanf("%d",&score[i]);
			i++;
		}
		while(j<student_num){
			total = total+score[j];
			j++;
		}
		avg = total/student_num;
		while(l<student_num){
			if(score[l]>avg){
				count1++;
			}
			l++;
		}
		t = (double)count1/(double)student_num;
		printf("%.3f%%\n",t*100);
		free(score);
		k++;
	}
}
