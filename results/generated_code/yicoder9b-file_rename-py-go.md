In Go language, the equivalent code would be:

```go
package main

import (
    "os"
    "path/filepath"
)

func renameFile(oldName, newName string) {
    err := os.Rename(oldName, newName)
    if err != nil {
        panic(err) // or handle the error in some other way
    }
}

func main() {
    cwd, _ := os.Getwd()
    renameFile(filepath.Join(cwd, "input.txt"), filepath.Join(cwd, "output.txt"))
    renameFile(filepath.Join(cwd, "docs"), filepath.Join(cwd, "mydocs"))

    // Rename files in root directory
    rootDir := string([]rune(cwd)[0:1]) // Get the name of the root directory depending on the OS
    renameFile(filepath.Join(rootDir, "input.txt"), filepath.Join(rootDir, "output.txt"))
    renameFile(filepath.Join(rootDir, "docs"), filepath.Join(rootDir, "mydocs"))
}
```
This program renames a file and directory in the current working directory and then in root directory using the os.Rename function. If there is an error during renaming it panics (which isn't ideal for production code) but in a command line application this will usually be fine. The "filepath.Join" function ensures that you always use correct path separators depending on your OS ('/' or '\').

Note: In Go, the root directory of the filesystem can vary based on the operating system and the environment. This solution uses the first character of the current working directory to get the name of the root directory which works for Unix-based systems. Please handle this in a more accurate way according your requirements.
