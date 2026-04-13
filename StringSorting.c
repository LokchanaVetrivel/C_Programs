[24bcs031@mepcolinux sem1]$cat 7sort.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void sortStrings(char **strings, int n) {
   int i,j;
   for (i = 0; i < n - 1; i++) {
      for (j = i + 1; j < n; j++) {
         if (strcmp(strings[i], strings[j]) > 0) {
            char *temp = strings[i];
            strings[i] = strings[j];
            strings[j] = temp;
         }
      }
   }
}
int main() {
   int n,i,j;
   char **strings;
   printf("Enter the number of strings: ");
   scanf("%d", &n);
   // Allocate memory for string pointers
   strings = (char **)malloc(n * sizeof(char *));
   if (strings == NULL) {
      printf("Memory allocation failed!\n");
      return 1;
   }
   for (i = 0; i < n; i++) {
      strings[i] = (char *)malloc(100 * sizeof(char));
      if (strings[i] == NULL) {
         printf("Memory allocation failed!\n");
         for (j = 0; j < i; j++) {
            free(strings[j]);
         }
         free(strings);
         return 1;
      }
      printf("Enter string %d: ", i + 1);
      scanf(" %[^\n]", strings[i]); // Read a line of input
   }
   sortStrings(strings, n);
   printf("\nSorted strings:\n");
   for (i = 0; i < n; i++) {
      printf("%s\n", strings[i]);
      free(strings[i]); // Free memory for each string
   }
   // Free memory for string pointers
   free(strings);
   return 0;
}
[24bcs031@mepcolinux sem1]$cc 7sort.c
[24bcs031@mepcolinux sem1]$./a.out
Enter the number of strings: 3
Enter string 1: copy
Enter string 2: string
Enter string 3: print

Sorted strings:
copy
print
string
[24bcs031@mepcolinux sem1]$./a.out
Enter the number of strings: 4
Enter string 1: dog
Enter string 2: banana
Enter string 3: apple
Enter string 4: cat

Sorted strings:
apple
banana
cat
dog
