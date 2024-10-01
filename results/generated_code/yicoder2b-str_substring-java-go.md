The equivalent code in Golang would be:

```golang
package main
import (
    "strings"
    "unicode"
    "encoding/utf8"
)

func Substring(str string, n int, m int) string { 
    return str[n : n+m]
}

func Substring(str string, n int) string {
    return str[n:]
}

func Substring(str string) string {
    if len(str) == 0 { return "" } 
    return str[:len(str)-1]
}

func Substring(str string, c byte, m int) string {
    _, pos := utf8.DecodeRuneInString(str, c)
    if pos < n { return "" } 
    return str[pos:pos+m]
}

func Substring(str string, sub string, m int) string {
    pos := strings.Index(str, sub)
    if pos == -1 { return "" } 
    return str[pos:pos+m]
}
```
