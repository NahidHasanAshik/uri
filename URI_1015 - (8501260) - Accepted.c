#include<stdio.h>
#include<math.h>
int main()
{
     float Distance,x1,y1,x2,y2;
     scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
     Distance=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
     printf("%.4f\n",Distance);
     return 0;
}
