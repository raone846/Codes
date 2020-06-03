#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char cha[100];
    char *s;
    int arr[10]={0,},i,num;
	scanf("%[^\n]%*c", cha);
	for(s=&cha[0];*s!='\0';s++){
		if(*s=='0')
			arr[0]++;
		else if(*s=='1')
			arr[1]++;
		else if(*s=='2')
			arr[2]++;
		else if(*s=='3')
			arr[3]++;
		else if(*s=='4')
			arr[4]++;
		else if(*s=='5')
			arr[5]++;
		else if(*s=='6')
			arr[6]++;
		else if(*s=='7')
			arr[7]++;
		else if(*s=='8')
			arr[8]++;
		else if(*s=='9')
			arr[9]++;
	}  
	for(i=0;i<10;i++)
		printf("%d ",arr[i]);
    return 0;
}

