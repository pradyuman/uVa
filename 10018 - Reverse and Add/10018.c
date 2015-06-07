/*Problem 10018*/
#include <stdio.h>

unsigned int addReverse(unsigned int);
int palindrome(unsigned int);

int main() {
   
   int num;
   scanf("%d", &num);
   
   unsigned int added, c;
   while (num--) {
      c = 0;
      scanf("%d", &added);
      do {
         added = addReverse(added);
         c++;
      } while (!palindrome(added));
      
      printf("%d %d\n", c, added);
   }
   
	return 0;
}

unsigned int addReverse(unsigned int added) {
   unsigned int reverse = 0, temp = added;
   while (temp != 0) {
      reverse *= 10;
      reverse += temp % 10;
      temp /= 10;
   }
   
   return added + reverse;
}

int palindrome(unsigned int added) {
   unsigned int reverse = 0, temp = added;
   while (temp != 0) {
      reverse *= 10;
      reverse += temp % 10;
      temp /= 10;
   }
   return added == reverse ? 1 : 0;
}