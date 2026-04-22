#include <stdio.h>

int main()
{
    int a,b,c;
    printf("napis 3 cela cisla:\n");
    printf("1:");
    scanf("%d",&a);

    printf("2:");
    scanf("%d",&b);

    printf("3:");
    scanf("%d",&c);

    int *p_a = &a;
    int *p_b = &b;
    int *p_c = &c;

    printf("soucet:%d\n",*p_a + *p_b + *p_c);
    if (((*p_a + *p_b + *p_c) % 2) == 1 )
    {
        printf("soucet je lichy\n");
    } else if (((*p_a + *p_b + *p_c) % 2) == 0)
    {
        printf("soucet je sudy\n");
    }


    if (*p_a >= *p_b && *p_a >= *p_c)
    {
        printf("nejvetsi z nich je %d", *p_a);
    } else if (*p_b >= *p_a && *p_b >= *p_c)
    {
        printf("nejvetsi z nich je %d", *p_b);
    } else if (*p_c >= *p_a && *p_c >= *p_b)
    {
        printf("nejvetsi z nich je %d",*p_c);
    }
    

    
    
    

    return 0;
}
