Here's the converted code in Golang:
```
package main
import (
 "fmt"
 "os"
)
func main() {
 err := os.Rename("input.txt", "output.txt")
 if err != nil {
 fmt.Println(err)
 }
 
 err = os.Rename("c:/input.txt", "c:/output.txt")
 if err != nil {
 fmt.Println(err)
 }
 
 err = os.Rename("docs", "mydocs")
 if err != nil {
 fmt.Println(err)
 }
 
 err = os.Rename("c:/docs", "c:/mydocs")
 if err != nil {
 fmt.Println(err)
 }
}
```
This code uses the `os.Rename()` function to rename the files and directories. The first two calls to `os.Rename()` are in the current working directory, while the last two calls are in the filesystem root. The code also checks for any errors that may occur during the renaming process using the `if` statement.

