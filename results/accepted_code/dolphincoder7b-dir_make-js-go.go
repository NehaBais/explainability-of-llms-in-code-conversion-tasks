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