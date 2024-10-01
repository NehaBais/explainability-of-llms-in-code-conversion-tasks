Here's the converted code from Java to Golang:
```
package main
import (
 "fmt"
 "os"
)
func main() {
 err := os.WriteFile("output.txt", []byte(""), 0644)
 if err != nil {
 fmt.Println(err)
 }
 err = os.MkdirAll("docs", os.ModePerm)
 if err != nil {
 fmt.Println(err)
 }
}
```
In this code, we first import the necessary packages: `fmt` for printing error messages and `os` for interacting with the operating system. 
We then use the `os.WriteFile` function to create an empty file called "output.txt" in the current working directory. We pass an empty byte slice as the contents of the file and set the permissions to read-write for the owner. If there's an error, we print the message.
Next, we use the `os.MkdirAll` function to create an empty directory called "docs" in the current working directory and all its parent directories. We set the permissions to read-write-execute for the owner and read-only for everyone else. If there's an error, we print the message.

