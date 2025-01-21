The error message is "expected 'package', found 'import'", which suggests that the Go compiler expected to find an import statement or package declaration, but instead it found "import". This error occurs because Golang requires a package declaration at the beginning of every file. In this case, we've provided no package declaration so the compiler is expecting one.

To fix this issue, you can simply add a package declaration to the top of your code like so:
```go
package main

import  (
     "fmt"
     "os"
)

func Mkdirp(dir string) error  {
    err  := os.MkdirAll(dir, 0755)
    if err == nil  || os.IsExist(err)  {
        return nil
     }
    return err
}

func main()  {
    dirName  :=  "./path/to/dir"
    if err  := Mkdirp(dirName); err  != nil  {
        fmt.Printf("Failed to create directory %q: %v\n", dirName, err)
        os.Exit(1)
     }
     //  ...
}
```

In this corrected code block, we've added the package declaration "package main" at the beginning of our file. This tells the Go compiler that this is a program and not a library.
