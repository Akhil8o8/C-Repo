#include<stdio.h>
#include<math.h>
int main()
{
    float t;
    int x1,x2,y1,y2;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    t=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    printf("%.4f",t);
}