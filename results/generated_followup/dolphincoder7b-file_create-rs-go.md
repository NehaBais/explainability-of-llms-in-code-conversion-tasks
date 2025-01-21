The error message is: "io/ioutil" imported but not used, which means that the `io/ioutil` package was imported to use some functionality but it was never actually used in the program. To fix this issue, we need to remove the import statement of `io/ioutil`, because we are using functionality from the `os` package instead.

Here's the correct code block:
```go
package main

import (
    "log"
    "os"
)

const fileName  =  "output.txt"
const dirName  =  "docs"

func main()  {
    err  := create(".")
    if err  != nil  {
        log.Fatal(err)
    }

    err  = create("/")
    if err  != nil  {
        log.Fatal(err)
    }
}

func create(root string) error  {
    filePath  := root  + fileName
    dirPath  := root  + dirName

    err  := os.MkdirAll(dirPath, 0755)
    if err  != nil  {
        return err
    }

    file, err  := os.Create(filePath)
    defer file.Close()
    if err  != nil  {
        return err
    }

    _, err  = file.WriteString("")
    if err  != nil  {
        return err
    }

    return nil
}
```

The fix is to remove the import statement of `io/ioutil` because we are using functionality from the `os` package instead. The correct code block now uses the `log` and `os` packages and creates an empty file called "output.txt" with a size of 0 bytes in the current working directory, as well as an empty directory called "docs". This is done twice: once in the current working directory and once at the root of the filesystem.
