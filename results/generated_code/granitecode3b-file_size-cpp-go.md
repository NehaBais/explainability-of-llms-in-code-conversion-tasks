Sure, here's the equivalent Golang code for the given C++ code:
```
package main
import (
 "fmt"
 "io/ioutil"
 "os"
)
func printFileSize(filename string) {
 size, err := ioutil.ReadFile(filename)
 if err != nil {
 fmt.Fprintln(os.Stderr, err.Error())
 return
 }
 fmt.Printf("Size of file %s is %d bytes.n", filename, len(size))
}
func main() {
 printFileSize("./input.txt")
 printFileSize("/input.txt")
}
```
In this Golang code, we use the `io/ioutil` package to read the contents of a file and return its size as an array of bytes. We then use the `fmt` package to print the size of the file. The `main()` function is unchanged from the C++ code.

