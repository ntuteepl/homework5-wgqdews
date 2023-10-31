#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    float temC;
    double temF,b;
    int a;
    scanf("%f",&temC);
    temF=temC*9/5+32;
    a=temF*100;
    if(a%10>=5)
        a=a+10;
    printf("%d%c%d",a/100,'.',a/10%10);

    return 0;
}
