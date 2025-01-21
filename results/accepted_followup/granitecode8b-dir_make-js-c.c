#include
#include
#include
typedef unsigned int mode_t;
char *malloc(size_t size);
void free(void *ptr);
int strlen(const char *str);
void strcpy(char *dst, const char *src);
int mkdir(const char *path, mode_t mode);
const char *strchr(const char *str, int c);
void mkdirp(const char *path, mode_t mode) {
  char *p = malloc(strlen(path) + 1);
  strcpy(p, path);
  if (strchr(p, '/') != NULL) {
    char *dir = strchr(p, '/');
    *dir = 0;
    mkdirp(p, mode);
    *dir = '/';
  }
  mkdir(p, mode);
  free(p);
}