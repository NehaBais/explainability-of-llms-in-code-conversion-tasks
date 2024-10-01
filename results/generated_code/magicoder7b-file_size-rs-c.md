 The equivalent C code would be as follows. Please note that, unlike in Rust, there is no direct built-in way to perform I/O operations like `writeln` or `process::exit` in C standard library. We need to use additional libraries (like glib, gtkmm etc) for these functionalities:

```c
#include <glib.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
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
```
This code does the following:
1. It checks if a filename is provided in command line arguments, exits with an error message if not.
2. It creates and opens a GFile for the file specified in command line argument, gets its information including size and checks if it exists, printing out the error if there's any.
3. If the file info was successfully retrieved, prints out the file size.
4. Finally, it releases the reference to the GFile object.
