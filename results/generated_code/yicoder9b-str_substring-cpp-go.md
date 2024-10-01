Below is the equivalent Golang code for your C++ program: 

```go
package main

import (
    "fmt"
    "unicode"
)

func substring(s string, n int, m int, c rune, subs []rune) {
    runes := []rune(s)

    // Starting from n characters in and of m length
    if len(runes) > n+m && m > 0 {
        fmt.Println(string(runes[n : n+m]))
    } else if len(runes) > n {
        fmt.Println(string(runes[n:]))
    }

    // Whole string minus the last character
    if len(runes) > 0 {
        fmt.Println(string(runes[:len(runes)-1]))
    }

    index := -1

    // Starting from a known character within the string and of m length
    for i, r := range runes {
        if r == c {
            index = i
            break
        }
    }

    if index != -1 && len(runes)-index >= m {
        fmt.Println(string(runes[index : index+m]))
    }

    // Starting from a known substring within the string and of m length
    for i, _ := range runes {
        if len(runes) > i+len(subs) && equalRunes(runes[i:i+len(subs)], subs) {
            index = i
            break
        }
    }

    if index != -1 && len(runes)-index >= m {
        fmt.Println(string(runes[index : index+m]))
    }
}

func equalRunes(a, b []rune) bool {
    for i, v := range a {
        if v != b[i] {
            return false
        }
    }
    return true
}

func main() {
    s := "0123456789"
    n := 3
    m := 4
    c := rune("2"[0]) // single-character string to rune conversion
    sub := []rune("456")
    substring(s, n, m, c, sub)
}
```
