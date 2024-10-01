 The equivalent Go code for the JavaScript code you provided would be as follows:

```go
package main

import (
    "io/ioutil"
    "os"
    "path/filepath"
)

func main() {
    var err error
    
    // Move file in current directory.
    inputFile := "input.txt"
    outputFile := "output.txt"
    if _, err = os.Stat(inputFile); !os.IsNotExist(err) {
        err = os.Rename(inputFile, outputFile)
        if err != nil {
            panic(err)
        }
    } else {
        println("No file input.txt found.")
    }
    
    // Move file in filesystem root.
    inputFileRoot := "/" + inputFile  // Using Unix-style path separators for this example, adapt as needed.
    outputFileRoot := "/" + outputFile
    if _, err = os.Stat(inputFileRoot); !os.IsNotExist(err) {
        err = os.Rename(inputFileRoot, outputFileRoot)
        if err != nil {
            panic(err)
        }
    } else {
        println("No file in root directory found.")
    }
    
    // Move folder in current directory.
    inputDir := "docs"
    outputDir := "mydocs"
    if _, err = os.Stat(inputDir); !os.IsNotExist(err) {
        err = os.Rename(inputDir, outputDir)
        if err != nil {
            panic(err)
        }
    } else {
        println("No directory docs found.")
    }
    
    // Move folder in filesystem root.
    inputDirRoot := "/" + inputDir  // Using Unix-style path separators for this example, adapt as needed.
    outputDirRoot := "/" + outputDir
    if _, err = os.Stat(inputDirRoot); !os.IsNotExist(err) {
        err = os.Rename(inputDirRoot, outputDirRoot)
        if err != nil {
            panic(err)
        }
    } else {
        println("No directory in root directory found.")
    }
}
```
Please note that:
1. The Go language does not have built-in support for moving directories as JavaScript does (with the `ActiveXObject` class), so only files are handled here.
2. This code uses Unix-style paths, but Windows paths can be used by replacing "/" with "\\". 
3. If the file or directory does not exist in the current working directory or root directory, an error will occur and you should check for it before renaming.
