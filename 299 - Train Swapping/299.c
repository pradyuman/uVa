/*Problem 299*/
#import <stdio.h>

int swap(int input[], int length);

int main() {
   
   int num, i, length;
   scanf("%d", &num);
   
   int input[50];
   while (num--) {
      scanf("%d", &length);
      for (i = 0; i < length; i++)
         scanf("%d", &input[i]);
      
      printf("Optimal train swapping takes %d swaps.\n", swap(input, length));
   }
   
	return 0;
}

int swap(int input[], int length) {
   int i,k;
   int c = 0;
   
   int t;
   for (i = 0; i < length; i++) {
      k = i;
      while (input[i] != i + 1) {
         if (input[++k] == i + 1) {
            t = input[k - 1];
            input[k - 1] = input[k];
            input[k] = t;
            k -= 2;
            c++;
         }
      }
   }
   
   return c;
}