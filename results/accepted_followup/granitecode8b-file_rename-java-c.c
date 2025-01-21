#include
#include
#include
#include
#include
#include
int renameFile(const char *oldname, const char *newname) {
  int success;
  FILE *file = fopen(oldname, "r");
  if (file != NULL) {
    fclose(file);
    success = (rename(oldname, newname) == 0);
  } else {
    struct stat sb;
    success = (stat(oldname, &sb) == 0) && (mkdir(newname, sb.st_mode) == 0);
    if (success) {
      DIR *dir = opendir(oldname);
      struct dirent *entry;
      while ((entry = readdir(dir)) != NULL) {
        char newpath[PATH_MAX];
        snprintf(newpath, sizeof(newpath), "%s/%s", newname, entry->d_name);
        success = renameFile(entry->d_name, newpath);
      }
      closedir(dir);
    }
  }
  return success;
}