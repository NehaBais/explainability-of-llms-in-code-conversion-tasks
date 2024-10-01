Here's the equivalent code in Golang:
```
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
```
This code uses the `os` package to check for the existence of a file and directory in both the current working directory and the filesystem root. It first gets the current working directory using `os.Getwd()`, then checks if the file exists using `os.Pathisfile()`. If it does, it prints that the current working directory has the file. Otherwise, it prints that the current working directory does not have the file. 
It then checks for the existence of the file in the filesystem root using the same method, but with the path to the file set to `/input.txt`. It does the same for the `docs` directory using `os.Pathisdir()`. Finally, it checks for the existence of the `docs` directory in the filesystem root and prints a message based on whether it exists or not.

