#include<stdio.h>
#include<string.h>
int main() {
    char arr[1000000];
    int count=0;
    int len;
    scanf("%[^\n]s", arr);
    len = strlen(arr);
    for (int i = 0; i < len; i++) {
        if (arr[i] == ' ') {
            count++;
        }
    }
    if(arr[0]==' '||arr[len]==' '){
	    count = count-1;
    }
    printf("%d", count + 1);
}
