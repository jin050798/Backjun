#include<stdio.h>
#include<string.h>
int main() {
    char arr[1000000];
    int count=0;
    int len;
    scanf("%[^\n]s", arr);//공백을 포함한 문자열 입력받기
    len = strlen(arr);
    for (int i = 0; i < len; i++) {
        if (arr[i] == ' ') {
            count++;
        }
    }
    int j = 0;
    int space_num = 0;
    if(arr[0]==' '){
	    while(arr[j] == ' '){
		    space_num++;
		    j++;
	    }
	    count = count - space_num;
    }
    int space_num2 = 0;
    int k = strlen(arr);
    if(arr[len-1]==' '){
	    while(arr[k-1] == ' '){
		    space_num2++;
		    k--;
	    }
	    count = count - space_num2;
    }

    printf("%d", count + 1);
}
