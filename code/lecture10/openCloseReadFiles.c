#include <stdio.h>

int main() {
   FILE *file = fopen("data.txt", "w");
   if (file == NULL) {
      perror("Error opening file");
      return 1;
   }
   fprintf(file, "Writing file\n");
   fclose(file);
   
   file = fopen("data.txt", "r");
   if(file == NULL) {
      perror("Error opening file");
      return 1;
   }
   char line[100];
   fgets(line, sizeof(line), file);
   printf("%s", line);
   fclose(file);
   
   return 0;
}