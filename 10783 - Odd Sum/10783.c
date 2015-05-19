/* Problem 10783 */
#include <stdio.h>

int findOddSum(int a, int b);

int main() {
   
   int num;
   
   scanf("%d", &num);
   
   if(num < 1 || num > 100)
      return 1;
   
   int a,b;
   int count = 0;
   while (num--) {
      scanf("%d\n%d", &a, &b);
      
      if (a < 0 || a > 100 || b < 0 || b > 100 || a > b)
         return 1;
         
      printf("Case %d: %d\n", ++count, findOddSum(a, b));
   }
   
   return 0;
}

int findOddSum(int a, int b){
   
   int isOdd = a % 2;
   
   int lowerBound = a + !isOdd;
   
   int sum = 0;
   
   while (lowerBound <= b) {
      sum += lowerBound;
      lowerBound += 2;
   }
   
   return sum;

}
