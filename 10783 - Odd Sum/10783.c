/* Problem 10783 */
#include <stdio.h>

int main() {
   
   int num;
   
   scanf("%d", &num);
   
   int a,b;
   while (num--) {
      scanf("%d\n%d", &a, &b);
      printf("%d %d\n", a, b);
   }
   
   return 0;
}
