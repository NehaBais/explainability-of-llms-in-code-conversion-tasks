Here's the equivalent code in Golang:
```go
package main
import (
 "fmt"
 "os"
)
func main() {
 err := os.MkdirAll("./path/to/dir", 0755)
 if err != nil {
 fmt.Println("An Error Occurred:", err)
 }
}
```
This code uses the `os.MkdirAll` function to create a directory and any missing parents. The first argument is the path of the directory to create, and the second argument is the permissions to set on the created directory. In this example, we're using the default permissions (`0755`). 
If an error occurs during the creation of the directory, the code will print an error message to the console.

