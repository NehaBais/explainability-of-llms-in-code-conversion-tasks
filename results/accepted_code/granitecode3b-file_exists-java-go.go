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