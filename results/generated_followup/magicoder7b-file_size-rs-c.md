 The error "fatal error: 'glib.h' file not found" occurs because the C compiler doesn't know where to find this header file. 

To fix it, we need to install glib library on our system or specify its location in the include path during compilation using `-I` option. For example, if you are compiling from terminal with gcc command: `gcc -o output_file input_file -I/usr/include/glib-2.0`.

Here is the corrected code block (note that the actual file paths will depend on your system):
```c
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
```
