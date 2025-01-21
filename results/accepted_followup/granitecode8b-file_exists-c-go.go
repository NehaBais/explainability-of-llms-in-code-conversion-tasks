package main
import (
 "fmt"
 "os"
)
func checkFile(path string) bool {
 info, err := os.Stat(path)
 if err != nil {
 return false
 }
 return !info.IsDir()
}
func checkDir(path string) bool {
 info, err := os.Stat(path)
 if err != nil {
 return false
 }
 return info.IsDir()
}
func main() {
 fmt.Printf("input.txt is a regular file? %v
", checkFile("input.txt"))
 fmt.Printf("docs is a directory? %v
", checkDir("docs"))
 fmt.Printf("/input.txt is a regular file? %v
", checkFile("/input.txt"))
 fmt.Printf("/docs is a directory? %v
", checkDir("/docs"))
}