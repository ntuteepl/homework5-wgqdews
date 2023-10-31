#include <stdio.h>
#include <stdlib.h>
int main()
{
    int tim,mon;
    double mon1;
    scanf("%d%d",&tim,&mon);
    if(tim>=121)
        mon1=((tim-120)*mon*1.66)+(mon*1.33*60)+(60*mon);
    else if(tim>=61)
        mon1=((tim-60)*mon*1.33)+(60*mon);
    else
        mon1=tim*mon;
    printf("%.1f",mon1);
    return 0;
}

