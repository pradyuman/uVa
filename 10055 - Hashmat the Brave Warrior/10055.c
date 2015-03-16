//Solution to 1055 problem
#include <stdio.h>
#include <string.h>

int main(){
	//Variables
	long long num1, num2;
	while(scanf("%lld %lld", &num1, &num2)){ 
		if(num2 > num1)
			printf("%lld\n", num2 - num1);
		else
			printf("%lld\n", num1 - num2);
	}
}
