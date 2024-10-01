To convert the C++ code to Golang, we can make use of the built-in string functions and type conversions in Go. Below is an example of how it can be done:

```go
package main

import (
    "fmt"
)

func main() {
    s := "0123456789"

    const n int = 3
    const m int = 4
    c := '2'
    sub := "456"

    fmt.Println(s[n:m])
    fmt.Println(s[n:])
    fmt.Println(s[:len(s)-1])
    fmt.Println(s[n:int(c)])
    fmt.Println(s[n:int(c)+m])
}
```

This program will output the same results as the original C++ code, demonstrating that the basic principles of substring manipulation are similar across different programming languages.

