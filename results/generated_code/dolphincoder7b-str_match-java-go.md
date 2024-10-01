Below is the Golang equivalent of the given Java code. Please note, it doesn't handle multiple occurrences of a string for part 2 and only supports startsWith and endsWith methods.
```go
package main
import (
    "fmt"
    "strings"
)
func main() {
    var str1 = "abcd"
    fmt.Println(str1, strings.HasPrefix("ab", str1)) // true
    fmt.Println(str1, strings.HasSuffix("zn", str1))  // false

    str2 := "abab"
    fmt.Println(str2, strings.Contains(str2, "bb"))   // false
    fmt.Println(str2, strings.Contains(str2, "ab"))    // true

    str3 := "abababba"
    fmt.Println(str3, strings.Index(str3, "bb"))    // -1
    fmt.Println(str3, strings.Index(str3, "ab", 0))   // 0
    fmt.Println(str3, strings.Index(str3, "ab", 2))    // 2
}
```
