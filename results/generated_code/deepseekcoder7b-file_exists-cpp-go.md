The Go standard library does not have a built-in file system handling as powerful as C++'s `<filesystem>`, however you can achieve the same effect using os and path packages in Go:

```go
package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func fileExists(filename string) {
	info, err := os.Stat(filename)
	if os.IsNotExist(err) {
		fmt.Println(filename, " does not exist")
	} else if info.IsDir() {
		fmt.Println(filename, " is a directory") 
	} else {
		fmt.Printf("%s exists with a file size of %d bytes.\n", filename, info.Size())
	}
}

func main(){
    working_dir, _ := os.Getwd()   // Get current working dir to use in root

    fileExists(filepath.Join(working_dir, "input.txt"))        // input.txt exists in the CWD
    fileExists(filepath.Join(working_dir, "docs", "input.txt"))  // docs/input.txt exists in the CWD
    
    root := "/"   // Here I assume you are using a Unix-based system, where root dir is / 
                  // On Windows it might be something else (usually C:\, but we're assuming here)
                  
    fileExists(filepath.Join(root, "input.txt"))        // input.txt exists in the FS root
    fileExists(filepath.Join(root, "docs", "input.txt"))  // docs/input.txt exists in the FS root
}
```
Please replace "/" with your filesystem's root dir path if not Unix-based system (like Windows). In Go `err != nil` is considered as an idiomatic way to handle potential errors. Here, it might be overkill for this particular case since we are checking only file existence and ignoring possible size read error which os.Stat method will return in case of regular files but not directories.

