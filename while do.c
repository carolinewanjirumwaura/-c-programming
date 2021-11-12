//online programm showing a while do loop
#include <stdio.h>
int main()
{
    int num=1,n;
    do
    {
        n=num+1;
printf("%d\n",n);
num++;
    }
    while(num>=10);
    return 0;
}
