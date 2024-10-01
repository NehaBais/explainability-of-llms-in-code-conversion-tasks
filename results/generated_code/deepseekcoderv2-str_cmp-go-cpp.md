
## Convert the following code from Golang to C++ using a translation tool
```
package main
import (
    "bufio"
    "flag"
    "fmt"
    "os"
)
func main() {
    var input *string = flag.String("f", "", "File name")
    flag.Parse()
    if !exists(*input) {
        fmt.Println("[Error] File not found!")
        return
    }
    f, err := os.Open(*input)
    defer func(f *os.File) {
        _ = f.Close()
    }(f)
    check(err)
    r := bufio.NewReader(f)
    for n, line := 0, 1; ; n++ {
        if _, err := r.ReadString('\n'); err != nil {
            break
        }
        fmt.Printf("Line %6d: %s", n+line, line)
        line = 0
    }
}
func exists(f string) bool {
    _, err := os.Stat(f)
    return !os.IsNotExist(err)
}
func check(e error) {
    if e != nil {
        panic(e)
    }
}
```

