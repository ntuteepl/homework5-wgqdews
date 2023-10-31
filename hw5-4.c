#include <stdio.h>
#include <stdlib.h>
int main()
{
    int hou,min;
    float ang;
    scanf("%d%d",&hou,&min);
    ang=hou*30-min*5.5;
    if(ang<0)
        ang=ang*-1;
    if(ang>180)
        ang=360-ang;
    printf("%.3f",ang);
    return 0;
}
