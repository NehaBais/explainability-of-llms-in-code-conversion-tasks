The error occurs because the "unicode" package is imported but not used anywhere in the program. In Go, if a package is imported then it must be used elsewhere in the program.

To fix this issue, you can remove the unused import statement.

The corrected code would look like this:
```go
package main

import "fmt" 

func substring(s string, n int, m int) {
    var result []rune
    for _, r := range s {
        result = append(result, r)
    }
    length := len(result)
    if length > 0 && n < length {
        // Print m characters starting at index n.
        if length-n >= m {
            fmt.Println(string(result[n : n+m]))
        } else {
            fmt.Println(string(result[n:]))
        }
    }
}

func main() {
    s := "abc文字化けdef"
    n := 2
    m := 3

    // Print m characters starting at index n.
    substring(s, n, m)

    // Print all characters starting at index n till the end of string.
    if len(s) > n {
        fmt.Println(s[n:])
    } else {
        fmt.Println("Index out of range")
    }

    // Print all characters except the last character.
    if len(s) > 1 {
        fmt.Println(s[:len(s)-1])
    } else {
        fmt.Println("Empty string or only one character")
    }

    // Print m characters starting with 'b'.
    cpos := findRunePos(s, 'b')
    if cpos != -1 && len(s)-cpos >= m {
        fmt.Println(s[cpos : cpos+m])
    } else {
        fmt.Println("Character not found or insufficient length from character position")
    }

    // Print m characters starting with "けd".
    spos := findStringPos(s, "けd")
    if spos != -1 && len(s)-spos >= m {
        fmt.Println(s[spos : spos+m])
    } else {
        fmt.Println("Substring not found or insufficient length from string position")
    }
}

func findRunePos(s string, r rune) int {
    for i, cr := range s {
        if cr == r {
            return i
        }
    }
    return -1
}

func findStringPos(s string, t string) int {
    if len(t) > len(s) {
        return -1
    }
    for i := range s {
        if s[i:i+len(t)] == t {
            return i
        }
    }
    return -1
}
```
