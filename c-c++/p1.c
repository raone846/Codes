    #include <stdio.h>
    int main()
    {
        int i, s, num, k=0;
        printf("Enter number: ");
        scanf("%d",&num);
        for(i=1;i<=num; ++i,k=0)
        {
            for(s=1; s<=num-i; ++s)
            {
               printf("  ");
            }
            while(k != 2*i-1)
            {
                printf("* ");
                ++k;
            }
            printf("\n");
        }    
        return 0;
    }
