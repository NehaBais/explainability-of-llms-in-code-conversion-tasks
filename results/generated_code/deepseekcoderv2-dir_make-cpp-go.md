### Solution:

```
package main

import (
    "fmt"
    "os/exec"
)

func main() {
    // Create a directory and any missing parents
    path := "./path/to/dir"
    cmd := exec.Command("mkdir", "-p", path)
    err := cmd.Run()
    if err != nil {
        fmt.Println(err)
    } else {
        fmt.Println("Directory created successfully")
    }
}
```
