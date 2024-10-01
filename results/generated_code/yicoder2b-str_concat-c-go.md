Sure, here is the equivalent code in Golang:
```go
package main

import (
    "fmt"
)

func sconcat(s1 string, s2 string) string {
    s0 := append([]byte(s1), 0)[..] // Convert to byte slice for appending
    s0 = append(s0, append([]byte(s2), 0)[..])
    return string(s0)                // Convert back to string
}

func main() {
    const s1 := "hello"
    fmt.Printf("%s literal\n", s1)    // Or
    fmt.Printf("%s literal\n", s1, " literal")
    s2 := sconcat(s1, " literal")
    fmt.Println(s2)                  
}
```
