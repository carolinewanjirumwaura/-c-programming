// demontration of assignment operators
#include <stdio.h>
int main()
{
    int a = 10, c;

    c = a;      // c is 10
    printf("c = %d\n", c);
    c += a;     // c is 20 
    printf("c = %d\n", c);
    c -= a;     // c is 10
    printf("c = %d\n", c);
    c *= a;     // c is 100
    printf("c = %d\n", c);
    c /= a;     // c is 10ss
    printf("c = %d\n", c);
    c %= a;     // c = 0
    printf("c = %d\n", c);

    return 0;
}
