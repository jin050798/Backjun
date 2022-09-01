#include<stdio.h>
#include<string.h>
int main(){
	int test;
	scanf("%d",&test);
	char s[20];
	int i = 0;
	int num;
	while(i<test){

		scanf("%d",&num);
		scanf("%s",s);
		if(num<1 || num >9){
			break;
		}
		for(int j = 0; j<strlen(s); j++){
			for(int k = 0; k<num; k++){
				printf("%c",s[j]);
			}
		}
		printf("\n");
		i++;
	}
}

			
		
