I have successfully converted the given C++ code to Golang and here's the equivalent Go code:
```
package main

import (
    "os"
)

func main() {
    f, err := os.Create("output.txt")
    if err != nil {
        panic(err)
    }
    defer f.Close()

    f2, err := os.Create("/output.txt")
    if err != nil {
        panic(err)
    }
    defer f2.Close()

    os.MkdirAll("docs", 0755)
}
```
In this Go code, we use the `os` package to create and close files (using a `defer` statement). We also use the `os.MkdirAll` function to create directories. 

Please note that in Golang, file and directory handling is generally done using the os package's I/O functionality. The `ioutil` package also contains helpful functions for working with these file types.
