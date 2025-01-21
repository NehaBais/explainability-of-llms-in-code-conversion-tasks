Error: The header file `io.h` is not found, which is required for using the `fopen()` function.

Fix: Add the missing header file by adding `#include <fcntl.h>` at the beginning of the code.
