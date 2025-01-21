#include <stdio.h>
#include <string.h>
#ifdef _WIN32
#include <direct.h>
#define PATH_MAX 40960
#else
#include
#endif

int renameFile(const char *srcPath, const char *destPath) {
#ifdef _WIN32
  if (0 != RemoveFile(srcPath)))
            return 0; // Failed to remove source file
  if (0 == MoveFile(destPath, srcPath))))
        return 1; // Successfully renamed file
    // If the renaming operation failed, check if it was because the destination
    // path already existed. If so, remove the existing destination file before
    // attempting the rename operation again.
#else
  if (0 == rename(srcPath, destPath))))
        return 1; // Successfully renamed file
    // If the renaming operation failed, check if it was because the destination
    // path already existed. If so, remove the existing destination file before
    // attempting the rename operation again.
#endif
}

int renameDirectory(const char *srcPath, const char *destPath) {
#ifdef _WIN32
  // Windows does not have a built-in function to rename directories. Instead,
  // it provides the MoveFile() function that can be used to move files or
  // directories between different locations on the file system. However, this
  // requires using the Win32 API functions and may need to handle additional
  // edge cases specific to the Windows file system.

  // If you are working with a Unix-like file system such as Linux or macOS, you
  // can use the standard C library functions for renaming files and
  // directories.
#else
  if (0 == rename(srcPath, destPath))))
        return 1; // Successfully renamed directory/file
    // If the renaming operation failed, check if it was because the destination
    // path already existed. If so, remove the existing destination file before
    // attempting the rename operation again.
#endif
}

int main() {
  const char *srcPath1 = "input.txt";
  const char *destPath1 = "output.txt";
  const char *srcPath2 = "directory_to_rename";
  const char *destPath2 = "new_directory_name";

  // Rename the file
  if (renameFile(srcPath1, destPath1)) {
    printf("Successfully renamed %s to %s\n", srcPath1, destPath1);
  } else {
    fprintf(stderr, "Failed to rename %s to %s\n", srcPath1, destPath1);
    return 1; // Error occurred during renaming
  }

  // Rename the directory
  if (renameDirectory(srcPath2, destPath2))) {
    printf("Successfully renamed %s to %s\n", srcPath2, destPath2);
  }
  else {
    fprintf(stderr, "Failed to rename %s to %s\n", srcPath2, destPath2);
    return 1; // Error occurred during renaming
  }

  printf("All files have been successfully renamed.\n");

  return 0; // All files have been successfully renamed
}