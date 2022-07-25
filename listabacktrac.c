#include <stdio.h>

int compara(long long num, int alg){
	int c;
	if (num==0){
		return 0;
	}	
	if (num % 10 == alg){
		c = 1;
	}

	return c + compara(num /10, alg);
	
}
int main (){
	long long num;
	int alg;
	int r;
	printf("digite o num: ");
	scanf("%lld", &num);
	
	printf("digite o algarismo a ser procurado no numero: ");
	scanf("%d", &alg);
	
r = compara(num, alg);
	printf ("o numero  %d",r);

}
