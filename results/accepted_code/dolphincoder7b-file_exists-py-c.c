#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
  struct stat file_info, dir_info;

  if (stat("input.txt", &file_info) != 0 ||
      stat("/input.txt", &file_info) != 0) {
    printf("File does not exist!\n");
    return -1;
  }

  if ((file_info.st_mode & S_IFMT) == S_IFREG &&
      file_info.st_uid == geteuid()) {
    // File exists and can be accessed by the current user
    // Additional checks can be performed here based on other attributes in
    // `file_info`
  }

  if (stat("docs", &dir_info) != 0 || stat("/docs", &dir_info) != 0) {
    printf("Directory does not exist!\n");
    return -2;
  }

  if ((dir_info.st_mode & S_IFMT) == S_IFDIR && dir_info.st_uid == geteuid()) {
    // Directory exists and can be accessed by the current user
    // Additional checks can be performed here based on other attributes in
    // `dir_info`
  }
}