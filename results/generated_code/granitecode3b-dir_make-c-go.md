Sure, here's the equivalent Golang code for the given C program:
```
package main
import (
 "fmt"
 "os"
 "path/filepath"
)
func main() {
 if len(os.Args) < 2 {
 fmt.Fprintln(os.Stderr, "usage: mkdirp <path>")
 os.Exit(1)
 }
 err := os.MkdirAll(os.Args[1], 0755)
 if err != nil {
 fmt.Fprintf(os.Stderr, "mkdirp: %v\n", err)
 os.Exit(1)
 }
}
```
This code uses the `os` and `path/filepath` packages in Golang to create a directory and any missing parents. The `main()` function checks if there is at least one argument (the path to be created), and if not, it prints an error message and exits with a non-zero status code.
The `os.MkdirAll()` function is used to create the directory and any missing parents. The second argument to `os.MkdirAll()` is the desired permissions for the newly created directory (in this case, read/write/execute for owner, read/write for group, and no permissions for others).

