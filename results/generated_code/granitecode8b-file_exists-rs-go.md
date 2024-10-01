Here's the converted code from Rust to Golang:
```
package main
import (
 "fmt"
 "os"
)
func main() {
 for _, file := range []string{"input.txt", "docs", "/input.txt", "/docs"} {
 if fi, err := os.Stat(file); err != nil {
 fmt.Printf("%s does not existn", file)
 } else if fi.IsDir() {
 fmt.Printf("%s is a directoryn", file)
 } else {
 fmt.Printf("%s is a filen", file)
 }
 }
}
```
This code checks for the existence of a file or directory and prints out whether it's a file, directory, or doesn't exist. The loop iterates over four different file paths, checking each one in turn. The `os.Stat()` function is used to get information about the file or directory, and then the `IsDir()` method is used to check if it's a directory. If there's an error getting the information, the program prints out that the file doesn't exist.

