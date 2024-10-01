Sure, here's the equivalent Golang code for creating a directory and any missing parents:
```
package main
import (
 "os"
)
func main() {
 err := os.MkdirAll("./path/to/dir", 0755)
 if err != nil {
 panic(err)
 }
}
```
Note that in Golang, the `mkdir -p` command is equivalent to using `os.MkdirAll()`, and the `0755` permission bits are used to set the permissions of the directory and its contents. The `panic()` function is used to exit the program if an error occurs during the creation of the directory.

