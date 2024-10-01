#include <cstdio>

int main() {
  const char old_name[] = "input.txt";
  const char new_name[] = "output.txt";
  rename(old_name, new_name);

  char *dir_name = "docs";
  if (rename(dir_name, "mydocs") == -1) { // -1 is returned if the directories
                                          // don't exist or could not be renamed
                                          // handle error appropriately here
  }

  return 0;
}