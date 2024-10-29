#include <unistd.h> // For access() function

int fileExists = access("input.txt", F_OK) == 0;
int dirExists = access("docs", F_OK) == 0;