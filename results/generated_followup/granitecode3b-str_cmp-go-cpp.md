Rewritten code in a single block:
```go
package main
import (
 "fmt"
 "strings"
)
func main() {
 c := "cat"
 d := "dog"
 if c == d {
  fmt.Println(c, "is bytewise identical to", d)
 } else {
  fmt.Println(c, "is bytewise different from", d)
 }
 if c > d {
  fmt.Println(c, "is lexically bytewise greater than", d)
 } else if c < d {
  fmt.Println(c, "is lexically bytewise less than", d)
 } else {
  fmt.Println(c, "is lexically bytewise equal to", d)
 }
 if strings.LexicographicalCompare(c, d) == 0 {
  fmt.Println(c, "is lexically bytewise greater than or equal to", d)
 } else {
  fmt.Println(c, "is lexically bytewise less than or equal to", d)
 }
}
```

