Here is the conversion of your Python code to Golang:

Golang:
```go
package main

import "fmt"

func main() {
    s := "abcdefgh"
    n, m, char, chars := 2, 3, 'd', "cd"

    // starting from n=2 characters in and m=3 in length;
    fmt.Println(s[n-1:n+m-1]))

    // starting from n characters in, up to the end of the string;
    fmt.Println(s[n-1:]))

    // whole string minus last character;
    fmt.Println(s[:len(s)-1]]))

    // starting from a known character char="d" within the string and of m length;
    indx := strings.Index(s, string(char)))
    fmt.Println(s[indx:indx+m]]))

    // starting from a known substring chars="cd" within the string and of m length. 
    indx := strings.Index(s, chars))
    fmt.Println(s[indx:indx+m]]))
}
```

Please note that in Go, indexes start at 0 (unlike Python where it starts from 1), and string slicing also uses the ":" syntax in Go.
