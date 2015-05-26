/* Problem 10035 */
#include <stdio.h>
#include <string.h>

int isCarry(int, int);

int main() {
   
   char ca[11];
   char cb[11];
   int a[11];
   int b[11];
   
   int c; //carry counter
   int i; //digit
   
   char magab; //magnitude
   char carry; //is carry?
   for (scanf("%s %s", &ca, &cb); ca != 0 && cb != 0; scanf("%s %s", &ca, &cb)) {
      c = 0; //reset carry
      
      aLen = strlen(ca);
      bLen = strlen(cb);
      
      for (i = 0; i < aLen; i++) {
         a[i] = ca[i] - '0';
      }
      
      for (i = 0; i < bLen; i++) {
         b[i] = cb[i] - '0';
      }
      
      magab = a == b ? '=' : a > b ? : 'a' : 'b';
      
      for (i = (a > b ? aLen : bLen) - 1; i >= 0 ; i--) {
         carry = isCarry(atoi(a[i]), atoi(b[i]));
         
      }
   }

	return 0;
}

int isCarry(a, b) {
   return (a + b) > 9 ? 1 : 0;
}