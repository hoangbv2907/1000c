#include <stdio.h>
#include <stdlib.h>

// tinh S = 1 + 2 + 3 +...+ n
int tinhTong(int n);
int main(int argc, char *argv[]) {
	int n;
	printf("\n Hay nhap so nguyen N: ");
	scanf("%d", &n);
	tinhTong(n);  
	return 0;
}
tinhTong(int n)
{
	int S = 0;
	for(int i = 0; i <= n; ++i)
	{
		S += i;
	}
	printf("\n Tong S(n) = %d",S) ;
}
