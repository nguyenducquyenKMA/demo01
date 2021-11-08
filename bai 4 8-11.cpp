#include"stdio.h"
#include"math.h"
#include"conio.h"
int main(){
	int x,n;
	long T,M;
	printf("nhap vao so x : ");
	scanf("%d",&x);
	printf("nhap vao so n : ");
	scanf("%d",&n);
	float S=0;
	int i=1;
	M=1;
	while(i<=n){
		T=pow(x,2*i);
		M=M*i;
		S+=(T/M);
		i++;
	}
	printf("\nTong la %.3f", S);
    getch();
    return 0;
}
