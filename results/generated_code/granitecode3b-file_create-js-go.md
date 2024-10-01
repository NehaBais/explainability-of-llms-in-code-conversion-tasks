Here's the equivalent Golang code:
```go
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
 err = os.MkdirAll("docs", 0755)
 if err != nil {
 fmt.Println(err)
 }
}
```
In this code, we import the "os" package to access file and directory operations. We then define a main function that calls two functions: `os.WriteFile` and `os.MkdirAll`.
The `os.WriteFile` function takes three arguments: the filename, the data to write, and the file permissions. In this case, we use the empty byte slice `[]byte("")` to write an empty file. The `0644` argument specifies read-write permissions for the owner of the file.
The `os.MkdirAll` function takes two arguments: the directory name and the permissions. We use the forward slash (`/`) as a separator character in Unix-style paths, so we need to pass `/docs` as the second argument to create the "docs" directory in the filesystem root. The `0755` argument specifies read-write execute permissions for the owner of the directory.
In both functions, we handle any errors by printing them to the console using `fmt.Println`. If there are no errors, the code will continue executing.

