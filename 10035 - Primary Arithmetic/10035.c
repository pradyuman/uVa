/* Problem 10035 */
#include <stdio.h>
#include <string.h>

int main() {
   
   long a, b;
   
   int carry, c; /*carry and carry counter*/
   
   while (scanf("%ld %ld", &a, &b) && (a != 0 || b != 0)) {
      carry = 0;
      c = 0;
      while (a != 0 || b != 0) {
         carry = (a % 10 + b % 10 + carry) > 9 ? 1 : 0;
         if (carry) c++;
         a /= 10;
         b /= 10;
      }
      if (c == 1)
         printf("1 carry operation.\n");
      else if (c)
         printf("%d carry operations.\n", c);
      else
         printf("No carry operation.\n");
   }

	return 0;
}