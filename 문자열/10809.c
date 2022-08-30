#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char s[100];
	char alphbet[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int answer[26] = {-1};
	scanf("%s",s);
	int i;
	for(int k = 0; k<26; k++){
		answer[k] = -1;
	}

	for(i=0; i<strlen(s); i++){

		for(int j = 0; j<26; j++){
			if(answer[j] == -1){
				if(s[i] == alphbet[j]){
					answer[j] = i;
				}
			}
			
		}
	}
	for(int l = 0; l<26; l++){
		printf("%d ",answer[l]);
	}

}
