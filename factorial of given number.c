#include<stdio.h>

int main() {
	long long int N,sum=1;
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
	    sum*=i;
	printf("%d",sum);
	return 0;
}
