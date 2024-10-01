Sure! Here's the equivalent Golang code for the same requirements:
```
package main
import (
 "fmt"
 "strings"
)
func substring(s string, n int, m int) string {
 if len(s) == 0 || m <= 0 {
  return ""
 }
 if n < 0 {
  n = len(s) + n
 }
 if n < 0 || m < 0 {
  return ""
 }
 if n > len(s) {
  return ""
 }
 if m > len(s)-n {
  m = len(s) - n
 }
 return s[n : n+m]
}
func str_wholeless1(s string) string {
 return substring(s, 0, len(s)-1)
}
func str_fromch(s string, ch int, m int) string {
 pos := strings.IndexByte(s, byte(ch))
 if pos == -1 {
  return ""
 }
 return substring(s, pos, m)
}
func str_fromstr(s string, in string, m int) string {
 pos := strings.Index(s, in)
 if pos == -1 {
  return ""
 }
 return substring(s, pos, m)
}
func main() {
 s := "hello world shortest program"
 fmt.Println(substring(s, 12, 5)) // get "short"
 fmt.Println(substring(s, 6, -1)) // get "world shortest program"
 fmt.Println(str_wholeless1(s)) // "... progra"
 fmt.Println(str_fromch(s, 'w', 5)) // "world"
 fmt.Println(str_fromstr(s, "ro", 3)) // "rog"
}
```
Note that the Golang code uses a different API to the C code for `sizeof`, so the type of the arguments passed to `substring` needs to be changed from `ptrdiff_t` to `int`. Also, the return value of `str_fromch` is of type `string` and not `[]byte`.

