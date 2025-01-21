The error message indicates that the variables `info` are declared and not used in the `checkFile` and `checkDirectory` functions respectively. These unused variables can be removed to fix the compilation error. The corrected code is shown below:

```go
package main

import (
    "fmt"
    "os"
)

func checkFile(filename string) {
    if _, err := os.Stat(filename); os.IsNotExist(err)  {
        fmt.Printf("%s does not exist\n", filename)
    } else  {
        fmt.Printf("File %s exists!\n", filename)
    }
}

func checkDirectory(dir string) {
    if _, err := os.Stat(dir); os.IsNotExist(err)  {
        fmt.Printf("%s does not exist\n", dir)
    } else  {
        fmt.Printf("Directory %s exists!\n", dir)
    }
}

func main()  {
    checkFile("input.txt")
    checkFile("/input.txt")
    checkDirectory("docs")
    checkDirectory("/docs")
}
```
