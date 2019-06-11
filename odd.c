#include <stdio.h>
int main()
{
    int number;
    printf(" ");
    scanf("%d",&number);

    // True if remainder is 0
    if( number%2 == 0 )
        printf("even",number);
    else
        printf("odd",number);
    return 0;
}
