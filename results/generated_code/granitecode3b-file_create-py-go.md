Here's the equivalent Golang code:
```go
import (
 "fmt"
 "io/ioutil"
 "os"
)
func create(directory string) error {
 err := ioutil.WriteFile(fmt.Sprintf("%s/output.txt", directory), []byte{}, 0644)
 if err != nil {
 return fmt.Errorf("error writing to file: %w", err)
 }
 err = os.MkdirAll(fmt.Sprintf("%s/docs", directory), 0755)
 if err != nil {
 return fmt.Errorf("error creating directory: %w", err)
 }
 return nil
}
func main() {
 err := create(".") // current directory
 if err != nil {
 panic(err)
 }
 err = create("/") // root directory
 if err != nil {
 panic(err)
 }
}
```
The `ioutil` package is used to write to the file and create the directory, while the `os` package provides functions for interacting with the operating system. The `create()` function takes a directory path as an argument and creates a new file called "output.txt" in that directory and an empty directory called "docs". The `main()` function calls the `create()` function twice, once in the current directory (represented by ".") and once in the root directory ("/").

