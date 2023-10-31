#include <stdio.h>
#include <stdlib.h>
int main()
{
    int min;
    double mon;
    scanf("%d",&min);
    if(min>=1500)
        mon=min*0.9*0.79;
    else if(min>=800)
        mon=min*0.9*0.9;
    else
        mon=min*0.9;
    printf("%.1f",mon);

    return 0;
}
