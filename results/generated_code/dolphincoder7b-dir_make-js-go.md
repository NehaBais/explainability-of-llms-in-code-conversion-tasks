In Golang, there's no built-in function for creating a directory with missing parents. However, you can use the `os.MkdirAll` function in combination with the `path.Split()` function to achieve the same effect:
```go
import (
    "fmt"
    "os"
)

func Mkdirp(dir string) error {
    err := os.MkdirAll(dir, 0755)
    if err == nil || os.IsExist(err) {
        return nil
    }
    return err
}

func main() {
    dirName := "./path/to/dir"
    if err := Mkdirp(dirName); err != nil {
        fmt.Printf("Failed to create directory %q: %v\n", dirName, err)
        os.Exit(1)
    }
    // ...
}
```

In this example, the `Mkdirp` function is used to create a directory with missing parents. If successful, it returns nil; otherwise, it returns an error. If you want to handle the error in a specific way, you can use the `os.IsExist()` function to check if the error represents the "directory already exists" condition. In this case, the `Mkdirp` function returns nil as expected.
