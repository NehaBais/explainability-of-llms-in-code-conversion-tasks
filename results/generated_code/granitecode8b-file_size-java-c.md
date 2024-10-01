Here is the converted code from Java to C:
```
#include 
#include 
int main(int argc, char *argv[]) {
 struct stat st;
 if (stat("input.txt", &st) == 0) {
 printf("%ju Bn", (uintmax_t)st.st_size);
 } else {
 perror("stat");
 return 1;
 }
 // Check the size of a file in the root directory
 if (stat("/", &st) == 0) {
 printf("%ju Bn", (uintmax_t)st.st_size);
 } else {
 perror("stat");
 return 1;
 }
 return 0;
}
```

