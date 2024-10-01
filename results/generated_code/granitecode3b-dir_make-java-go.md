Here's the equivalent Golang code for creating a directory and any missing parents:
```
package main
import (
 "fmt"
 "os"
)
func main() {
 err := os.MkdirAll("C:/parent/test", 0755)
 if err != nil {
 fmt.Println(err)
 } else {
 fmt.Println("Directory created successfully")
 }
}
```
This code uses the `os.MkdirAll()` function to create a directory and any missing parents. The second argument to `os.MkdirAll()` is the permission bits for the new directory, which in this case is set to 0755. If an error occurs during the creation of the directory, it will be printed to the console. Otherwise, a success message will be printed.

