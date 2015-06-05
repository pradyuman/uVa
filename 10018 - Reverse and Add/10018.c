/*Problem 10018*/
#import <stdio.h>

int addReverse(int);
int palindrome(int)

int main() {
   
   int num;
   scanf("%d", &num);
   
   int added, c;
   while (num--) {
      c = 0;
      scanf("%d", &added);
      while (!palindrome(added)) {
         added = addReverse(added);
         c++;
      }
      
      printf("%d %d\n", c. added);
   }
   
	return 0;
}