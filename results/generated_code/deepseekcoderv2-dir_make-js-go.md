### Solution:
```go
package main

import (
    "fmt"
    "os/exec"
)

func mkdirp(s string, c chan error) {
    cmd := exec.Command("mkdir", "-p", s)
    _, err := cmd.CombinedOutput()
    if err != nil {
        c <- err
        return
    }
    close(c)
}

func main() {
    mkdirChan := make(chan error, 1)
    go mkdirp("./testDir", mkdirChan)
    fmt.Println(<-mkdirChan)
}
```
