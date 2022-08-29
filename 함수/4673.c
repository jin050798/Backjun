#include<stdio.h>

void print_self_num();
int not_self_num(int i);
int main(){
	print_self_num();

}
void print_self_num(){
	int i = 0;
	int num=0;
	while(i<10000){
		num = not_self_num(i);
		
		printf("%d\n",num);
		i++;
	}
}
int not_self_num(int i){
	int result = 0;
	int a =0;
	int b=0;
	int c=0;
	int d=0;
	if(i<10){
		return i*2;
	}else if(i>=10 && i<100){
		result = i+i/10+i%10;
		return result;
	}else if(i>=100 && i<1000){
		a = i/100;
		b = (i-a*100)/10;
		c = i%10;
		result = i+a+b+c;
		return result;
	}else if(i>=1000 && i<10000){
		a = i/1000;
		b =(i-a*1000)/100;
		c = (i-a*1000-b*100)/10;
		d = i%10;
		result = i %10;
		return result;
	}
}
