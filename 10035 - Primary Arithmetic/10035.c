/* Problem 10035 */
#include <stdio.h>
#include <string.h>

int isCarry(int, int);

int main() {
   
   char ca[11], cb[11];
   int a[10] = {0}, b[10] = {0};
   
   int c; /*carry counter */
   int i; /*digit*/
   
   int aLen, bLen;
   char magab; /*magnitude*/
   char carry; /*is carry?*/
   
   long int in1, in2;
   
   for (scanf("%ld %ld", &in1, &in2); in1 != 0 && in2 != 0; scanf("%ld %ld", &in1, &in2)) {
      c = 0; /*reset carry*/

      /*making character array of input number*/
      aLen = sprintf(ca,"%ld", in1);
      bLen = sprintf(cb,"%ld", in2);
      
      for (i = 0; i < aLen; i++)
         a[10 - aLen + i] = ca[i] - '0';
      
      for (i = 0; i < bLen; i++)
         b[10 - bLen + i] = cb[i] - '0';

      for (i = 9 ; i >= (aLen > bLen ? 10 - aLen : 10 - bLen); i--) {
         carry = isCarry(a[i], b[i]);
         c += carry; /*incrementing carry counter*/
         if (i != 0) a[i - 1] += carry;
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

int isCarry(int a, int b) {
   return (a + b) > 9 ? 1 : 0;
}