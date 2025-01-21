#include <glib.h> // You may need to replace with full path, eg /usr/include/glib-2.0/glib.h
#include <stdio.h>

int main(int argc, char *argv[]) {
  if (argc <= 1) {
    fprintf(stderr, "Error: No file name supplied\n");
    exit(1);
  }

  GFile *file = g_file_new_for_path(argv[1]);
  GFileInfo *info = g_file_query_info(file, "standard::size", 0, NULL);

  if (info == NULL) {
    fprintf(stderr, "Error: Could not open file\n");
    exit(2);
  } else {
    printf("Size of %s is %lu bytes\n", argv[1], g_file_info_get_size(info));
  }

  g_object_unref(file);
  return 0;
}