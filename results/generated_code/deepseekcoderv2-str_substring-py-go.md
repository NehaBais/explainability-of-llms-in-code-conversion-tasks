## Solution - Golang
```go
package main

import "fmt"

func main() {
    s := []rune("abcdefgh")
    n, m := 2, 3
    char := 'd'
    chars := "cd"

    // starting from n=2 characters in and m=3 in length;
    fmt.Println(string(s[n-1:n+m-1]))
    // starting from n characters in, up to the end of the string;
    fmt.Println(string(s[:len(s)-1]))
    // whole string minus last character;
    fmt.Println(string(s))
    // starting from a known character char="d" within the string and of m length;
    indx := index(s, char)
    fmt.Println(string(s[indx : indx+m]))
    // starting from a known substring chars="cd" within the string and of m length. 
    indx = index(s, rune(chars))
    fmt.Println(string(s[indx : indx+m]))
}

func index(s []rune, r rune) int {
    for i := range s {
        if s[i] == r {
            return i
        }
    }
    return -1
}
```