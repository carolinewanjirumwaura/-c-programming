//demonstration of logical operators

#include <stdio.h>
int main()
{
    int x=10, y=10, z=20,result;
    
    result=(x==y)&&(z>y);
    printf("(x==y)&&(z>y) is %d\n",result);
   
    result=(x=y)&&(z<y);
    printf("(x==y)&&(z<y)is %d\n",result);
    
    result=(x==y)||(z>y);
    printf("(x==y)||(z>y)is %d\n",result);
    
    result=(x!=y)||(z<y);
    printf("(x!=y)||(z<y)is %d\n",result); 
    
    result=!(x!=y);
    printf("!(x!=y)is %d\n",result);
    
   return 0;
}
