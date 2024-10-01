Sure! Here's the equivalent code in Golang:
```go
package main
import (
 "fmt"
 "strings"
)
func main() {
 s1 := "abcd"
 s2 := "abab"
 s3 := "ab"
 
 //Beginning
 fmt.Println(strings.HasPrefix(s1, s3))
 //End
 fmt.Println(strings.HasSuffix(s1, s3))
 //Anywhere
 fmt.Println(strings.Contains(s1, s2))
}
```
In this code, we use the `strings` package to perform string matching operations. The `strings.HasPrefix()` function checks if `s1` starts with `s3`, while the `strings.HasSuffix()` function checks if `s1` ends with `s3`. The `strings.Contains()` function checks if `s2` contains `s3`.

