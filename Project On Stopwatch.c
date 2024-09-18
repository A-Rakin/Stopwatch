#include<stdio.h>
#define CIRCLE 60
#ifdef _win32
#define sleep (x) Sleep(x*100)
#else
#include <unistd.h>
#endif
#include<stdlib.h>
int main()
{
  int hour,minute, second;
  printf("Enter Hour Minute Second you want to see:\n");
  printf("Hour= ");
  scanf("%d",&hour);
  printf("Minute= ");
  scanf("%d",&minute);
  printf("Second= ");
  scanf("%d",&second);
  system ("cls");
  int h=0,m=0,s=0;
  while(1)
  {
    printf("\t\t\t\t***********Stop-Watch***********\n\n\n\n");
    printf("\t\t\t\t\t %.2d:%.2d:%.2d\n\n\n\n",h,m,s);
    printf("\t\t\t\t********************************\n\n\n\n");
    if(h==hour && m==minute && s==second)
    {
        break;
    }
    s++;
    sleep (1);
    if(s==CIRCLE)
    {
        m++;
        s=0;
    }
    if (m==CIRCLE)
    {
        h++;
        m=0;
    }
    system ("cls");
  }
return 0;
}
