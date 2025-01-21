#include <stdio.h> /* Include the correct header file */

int main() {
  FILE *file; /* Create pointer to file (standard C for file I/O) */
  if ((file = fopen("C:\\input.txt", "r")) ==
      NULL)                         /* Check if file could be opened */
    printf("Error opening file\n"); /* Output error message if not successful */
  else {
    /* Process file contents here */ /* Process the file */
    fclose(file);                    /* Close file once done */
  }
  return 0;
}