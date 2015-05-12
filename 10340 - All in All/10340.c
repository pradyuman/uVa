/*Problem 10340 */
#include <stdio.h>
#include <string.h>

int main() {
   char word[1000000];
   char sub[1000000];
   while (scanf("%s %s", word, sub) == 2) {
      int length = 0;
      int j;
      int i = 0;
      for (j = 0; j < strlen(sub); j++) {
         if (word[i] == sub[j]) {
            length++;
            i++;
         }
      }
      
      printf("%s\n", length == strlen(word) ? "Yes" : "No");
   }
   
   return 0;
}
