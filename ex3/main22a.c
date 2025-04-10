#include <stdio.h>

int main()
{
   int* ip;
   int iap = 2;
   ip = &iap;
   printf("%x\n", *ip);
   printf("%p\n",ip);
}
