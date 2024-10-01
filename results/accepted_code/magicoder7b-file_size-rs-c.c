#include <glib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  if (argc <= 1) {
    fprintf(stderr, "Error: No file name supplied\n");
    exit(1);
  }

  GError *error = NULL;
  GFile *file = g_file_new_for_path(argv[1]);
  GFileInfo *info = g_file_query_info(file, "standard::size", 0, &error);

  if (info == NULL) {
    fprintf(stderr, "Error: %s\n", error->message);
    exit(2);
  } else {
    printf("Size of file.txt is %lu bytes\n", g_file_info_get_size(info));
  }

  g_object_unref(file);
  return 0;
}