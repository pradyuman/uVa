/*Problem 10340 */
#include <stdio.h>

int main(){
   int ch;
   char ich;
   char word[100];
   char sub[100];
   int i = 0; /*counter*/
   while ((ch = getchar()) != EOF) {
      while ((ich = getchar()) != ' ') {
         word[i] = ch;
         i++;
      }
      getchar();
      i = 0;
      while ((ch = getchar()) != '\n') {
         sub[i] = ch;
         i++;
      }
   }

}