#include <stdio.h>
#include <stdlib.h>

int main() {
  printf("The following file called input.txt %s renamed as output.txt\n",
         rename("input.txt", "output.txt") == 0 ? "was" : "could not be");

  printf("The following file called /input.txt %s renamed as /output.txt\n",
         rename("/input.txt", "/output.txt") == 0 ? "was" : "could not be");

  printf("The following directory called docs %s renamed as mydocs\n",
         rename("docs", "mydocs") == 0 ? "was" : "could not be");

  printf("The following directory called /docs %s renamed as /mydocs\n",
         rename("/docs/", "/mydocs/") == 0 ? "was" : "could not be");

  return 0;
}