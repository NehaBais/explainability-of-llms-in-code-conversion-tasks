Here's the equivalent code in Golang:
```go
package main
import (
 "fmt"
)
func main() {
 str := "abcdefgh"
 n := 2
 m := 3
 // starting from n characters in and of m length;
 fmt.Println(str[n:n+m]) // => "cde"
 // starting from n characters in, up to the end of the string;
 fmt.Println(str[n:]) // => "cdefgh"
 // whole string minus last character;
 fmt.Println(str[:len(str)-1]) // => "abcdefg"
 // starting from a known character within the string and of m length;
 i := strings.Index(str, "b")
 fmt.Println(str[i:i+m]) // => "bcd"
 // starting from a known substring within the string and of m length. 
 i = strings.Index(str, "bc")
 fmt.Println(str[i:i+m]) // => "bcd"
}
``` 
Note that in Golang, indexing starts at 0, so we use `len(str)-1` to get the index of the last character in the string. Also, we use the `strings` package to find the index of a substring.

