Here's the equivalent code in Golang:
```go
package main
import (
 "fmt"
 "os"
 "path/filepath"
)
func mkdirp(path string) error {
 if err := os.MkdirAll(path, 0755); err != nil {
 return fmt.Errorf("failed to create directory: %w", err)
 }
 return nil
}
func main() {
 path := "C:/parent/test"
 if err := mkdirp(path); err != nil {
 fmt.Println("Failed to create directory:", err)
 } else {
 fmt.Println("Directory created successfully")
 }
}
```
The `mkdirp` function takes a single path string as an argument and creates the directory if it doesn't exist. If the directory already exists, it returns successfully without doing anything. 
Note that in Golang, the `os.MkdirAll()` function is used to create directories recursively, similar to the Java code. The `0755` permission bits are passed as an argument to the function to set the permissions of the created directory. 
In the `main()` function, we call the `mkdirp()` function with the path "C:/parent/test" and handle any errors that may occur during the directory creation process. If the directory is successfully created, a success message is printed; otherwise, an error message is printed indicating the failure.

