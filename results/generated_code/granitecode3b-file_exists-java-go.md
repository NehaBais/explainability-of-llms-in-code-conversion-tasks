Sure! Here's the equivalent code in Golang:
```go
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
This code uses the `os` package to check if a file and a directory exist in the current working directory, as well as in the filesystem root. The `fileExists` and `rootFileExists` functions use the `os.Stat` function to get information about the files or directories, and the `os.IsNotExist` function to check if an error indicating that the file or directory does not exist was returned by `os.Stat`.

