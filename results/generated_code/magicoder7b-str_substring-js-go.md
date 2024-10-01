 Below is your JavaScript code converted to Golang:

```go
package main

import (
    "fmt"
)

func main() {
    str := "abcdefgh"

    n := 2
    m := 3

    // Starting from n characters in and of m length;
    fmt.Println(str[n:n+m]) // => "cde"

    // Starting from n characters in, up to the end of the string;
    fmt.Println(str[n:])  // => "cdefgh"

    // Whole string minus last character;
    fmt.Println(str[:len(str)-1])  // => "abcdefg"

    // Starting from a known character within the string and of m length;
    idx := strings.IndexRune(str, 'b')
    if idx >= 0 {
        fmt.Println(str[idx:idx+m])  // => "bcd"
    } else {
        fmt.Println("'b' not found in the string")
    }

    // Starting from a known substring within the string and of m length. 
    idx = strings.Index(str, "bc")
    if idx >= 0 && (idx+m) <= len(str){
        fmt.Println(str[idx:idx+m])  // => "bcd"
    } else {
        fmt.Println("'bc' not found in the string or substring is out of bound")
    }
}
```
