import (
 "fmt"
 "os"
)
func main() {
 cwd, err := os.Getwd()
 if err != nil {
 fmt.Println("Error getting current directory:", err)
 return
 }
 fileExists := os.Pathisfile(cwd + "/input.txt")
 if fileExists {
 fmt.Println("Current working directory:", cwd, "has input.txt")
 } else {
 fmt.Println("Current working directory:", cwd, "does not have input.txt")
 }
 rootFileExists := os.Pathisfile("/input.txt")
 if rootFileExists {
 fmt.Println("Root has input.txt")
 } else {
 fmt.Println("Root does not have input.txt")
 }
 docDirExists := os.Pathisdir("docs")
 if docDirExists {
 fmt.Println("Current working directory has docs directory")
 } else {
 fmt.Println("Current working directory does not have docs directory")
 }
 rootDocDirExists := os.Pathisdir("/docs")
 if rootDocDirExists {
 fmt.Println("Root has docs directory")
 } else {
 fmt.Println("Root does not have docs directory")
 }
}