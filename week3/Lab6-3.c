#include <stdalign.h>

void main()
{
 int a, b;
 int temp;
 scanf("%d", &a);
 scanf("%d", &b);

 temp = b;
 while(temp >0)
{
    printf("%d ", a*(temp%10));
    temp/= 10;
}
}