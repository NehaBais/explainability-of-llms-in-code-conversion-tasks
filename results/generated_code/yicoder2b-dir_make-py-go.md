The equivalent code in Golang would be:

```golang
package main
import (
  "fmt"
  "os"
  "strings"
)
func mkdirp(path string) error {
  split := strings.Split(path, "/")
  for _, part := range split[:len(split)-1] {
    if _, err := os.Stat(part); err != nil && !os.IsNotFound(err) {
      return err
    }
    _, err = os.Mkdir(part, 0755)
    if err != nil {
      return err
    }
  }
  return nil
}
func main() {
  path := "./path/to/dir"
  err := mkdirp(path)
  if err != nil {
    fmt.Printf("Failed to create directory %s: %v\n", path, err)
  } else {
    fmt.Printf("Created directory %s\n", path)
  }
}
```
This program will attempt to create the directories in the provided path string. If any of the intermediate directories do not exist, they are created as needed. The function `os.Mkdir` is used to create each new directory. If a directory already exists or if an error occurs during its creation, the function returns this error.
