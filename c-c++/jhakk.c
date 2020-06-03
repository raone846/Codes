#include<stdio.h>
#define macro(m, a, i, n) m##a##i##n
#define Chai macro(n, a, i, m)
int Chai(){
	printf("Graphic");
	return 0;
}
