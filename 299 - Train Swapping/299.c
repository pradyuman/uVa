/*Problem 299 */
#import <stdio.h>

int swap(int carriages[]);

int main() {
   
   int num, i, length, swap;
   scanf("%d", &num);
   
   int input[50];
   while (num--) {
      scanf("%d", &length);
      for (i = 0; i < length; i++)
         scanf("%d", &input[i]);
      printf("Optimal train swapping takes %d swaps.", swap);
   }
	return 0;
}

int swap (int carraiges[]) {


}