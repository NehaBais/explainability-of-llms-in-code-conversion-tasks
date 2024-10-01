Sure, here is the equivalent code in Golang:

```Go
package main

import (
    "fmt"
    "os"
)

func fileExists(path string) bool {
    return os.Path exists(path)
}

func main() {
    // Check current working directory
    fmt.Printf("'input.txt'\n%v\n",fileExists("input.txt"))
    fmt.Printf("'zero_length.txt'\n%v\n",fileExists("zero_length.txt"))
    // Check root directory
    fmt.Printf("/docs/input.txt\n%v\n",fileExists("/docs/input.txt"))
    fmt.Printf("/docs/zero_length.txt\n%v\n",fileExists("/docs/zero_length.txt"))
}
```
Please note that this Golang code assumes the existence of "/docs/" directory in the filesystem root. If you have a file called "input.txt" and it exists in your current working directory or any directory which is part of the filesystem root, you will get `true` as output.
