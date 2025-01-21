The error occurred because the `os` package is not imported when using its functions directly. To fix this, the `import` statement must be added before using any of the functions in the `os` package.
The corrected code is as follows:
```go
package main
import (
 "fmt"
 "os"
)
func main() {
 cwd, err := os.Getwd()
 if err != nil {
 fmt.Println(err)
 return
 }
 fileExists(cwd + "/docs/input.txt")
 rootFileExists("/docs/input.txt")
}
func fileExists(filePath string) bool {
 _, err := os.Stat(filePath)
 return !os.IsNotExist(err)
}
func rootFileExists(filePath string) bool {
 _, err := os.Stat(filePath)
 return !os.IsNotExist(err)
}
``` 
This code will successfully compile and run without any errors, as the `import` statement is added before using the functions in the `os` package.

