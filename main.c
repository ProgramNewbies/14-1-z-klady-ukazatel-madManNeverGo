#include <stdio.h>

int main()
{
    int a,b,c;

    scanf("%d",&a);


    scanf("%d",&b);


    scanf("%d",&c);

    int *p_a = &a;
    int *p_b = &b;
    int *p_c = &c;

    printf("Soucet: %d\n",*p_a + *p_b + *p_c);

    if (*p_a >= *p_b && *p_a >= *p_c)
    {
        printf("Maximum: %d\n", *p_a);
    } else if (*p_b >= *p_a && *p_b >= *p_c)
    {
        printf("Maximum: %d\n", *p_b);
    } else if (*p_c >= *p_a && *p_c >= *p_b)
    {
        printf("Maximum: %d\n",*p_c);
    }


    if (((*p_a + *p_b + *p_c) % 2) == 1 )
    {
        printf("Soucet je lichy\n");
    } else {
        printf("Soucet je sudy\n");
    }

    
    
    

    return 0;
}
