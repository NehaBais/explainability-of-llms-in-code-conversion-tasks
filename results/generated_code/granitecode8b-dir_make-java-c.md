Here's the C code that implements the same functionality as the Java code you provided:
```c
#include 
#include 
void mkdirp(const char *path) {
 char dir[PATH_MAX];
 const char *p = NULL;
 size_t len;
 
 // handle absolute path
 if (path[0] == '/') {
  p = ++path;
 } else {
  p = path + strchr(path, '/') - path;
  if (p != path)
   p--; // handle relative path without a leading slash
  dir[0] = '.';
  dir[1] = '/';
  len = 2;
 }
 
 while (*p != '\\0') {
  char c = *p++;
  if (c == '/') {
   dir[len] = '\\0';
   mkdir(dir);
   p++; // skip the slash in the next path component
   if (*p == '\\0')
    break;
   dir[len - 1] = '\\'; // restore the trailing slash
   len = strlen(dir);
  } else {
   dir[len++] = c;
  }
 }
 
 dir[len] = '\\0';
 mkdir(dir);
}int main() {
 mkdirp("C:/parent/test");
 return 0;
}
```
This code uses the `mkdir()` function from the `<direct.h>` header file to create directories. It first checks if the path is absolute or relative, and handles it accordingly. Then, it splits the path into its components and creates each directory in turn using a loop. Finally, it calls `mkdir()` on the final component to create the entire directory structure.

