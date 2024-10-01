Here is the C code that implements the same functionality as the Rust code you provided:
```c
#include 
#include 
 
int mkdirp(const char *path) {
 int p[PATH_MAX];
 char *q, *r = NULL;
 int c, i = 0;
 
 if (realpath(path, p) == NULL) {
  p[i++] = '.';
  p[i] = '/';
 }
 
 for (q = (char *)p; (r = strchr(q, '/')) != NULL; q = r + 1) {
  c = *r;
  *r = 0;
  
  if (mkdir(p, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH) == -1) {
   if (errno == EEXIST && i > 1)
    return 0;
   else if (errno != EEXIST)
    return -1;
  }
  
  *r = c;
  p[i++] = '/';
 }
 
 if (*q == '\0')
  return mkdir(p, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
 else
  return 0;
}
```
The `mkdirp` function takes a single path string as an argument and creates any missing directories in the path. If the directory already exists, it returns successfully. The implementation is based on the `realpath` function to handle relative paths and the `strchr` function to split the path into individual components. The code recursively creates each directory in the path, checking for errors along the way. Finally, it creates the last directory in the path if it does not already exist.

