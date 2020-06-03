#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void calculate_the_maximum(int n, int k) {
    int i, j, s1=0, s2=0, s3=0, min1=0, min2=0, min3=0;
    for(i=1; i<=n; i++){
        for(j=i+1;j<=n;j++){
            s1=(i&j);
            s2=(i|j);
            s3=(i^j);
            if((s1<k) && (s1>min1))
                min1=s1;
            if((s2<k) && (s2>min2))
                min2=s2;
            if((s3<k)&& (s3>min3))
                min3=s3;
        }
    }
    printf("%d\n%d\n%d\n",min1,min2,min3);
}
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}
