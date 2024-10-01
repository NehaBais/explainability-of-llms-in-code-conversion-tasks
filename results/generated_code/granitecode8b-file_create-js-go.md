Here's the equivalent code in Golang:
```
package main
import (
 "fmt"
 "io/ioutil"
 "os"
)
func main() {
 err := ioutil.WriteFile("output.txt", []byte(""), 0644)
 if err != nil {
 fmt.Println(err)
 }
 err = ioutil.WriteFile("/output.txt", []byte(""), 0644)
 if err != nil {
 fmt.Println(err)
 }
 err = os.Mkdir("docs", 0755)
 if err != nil {
 fmt.Println(err)
 }
 err = os.Mkdir("/docs", 0755)
 if err != nil {
 fmt.Println(err)
 }
}
```
In this code, we first import the necessary packages: "fmt" for printing error messages, "io/ioutil" for writing to files, and "os" for creating directories.
We then define a function called `main()` which is the entry point of our program. Inside this function, we use the `ioutil.WriteFile()` function to create an empty file called "output.txt" in the current working directory and in the root filesystem. We also use the `os.Mkdir()` function to create an empty directory called "docs" in the current working directory and in the root filesystem.
Finally, we print any errors that occur during the execution of these functions using the `fmt.Println()` function.

