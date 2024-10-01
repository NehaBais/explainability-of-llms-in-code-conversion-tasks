Sure! Here's the equivalent Golang code:
```
// Compare two strings for exact equality
package main
import "fmt"
func main() {
 a := "ball"
 b := "bell"
 fmt.Printf("%s%2d%2d%2d%2d%2d%2d %sn", a, STREQ(a, b), STRNE(a, b), STRGT(a, b), STRLT(a, b), STRGE(a, b), STRLE(a, b), b)
}
func STREQ(a, b string) bool {
 return a == b
}
func STRNE(a, b string) bool {
 return a != b
}
func STRGT(a, b string) bool {
 return a > b
}
func STRLT(a, b string) bool {
 return a < b
}
func STRGE(a, b string) bool {
 return a >= b
}
func STRLE(a, b string) bool {
 return a <= b
}
// Compare two strings for inequality
package main
import "fmt"
func main() {
 a := "ball"
 b := "bell"
 fmt.Printf("%s%2d%2d%2d%2d%2d%2d %sn", a, !STREQ(a, b), STRNE(a, b), STRGT(a, b), STRLT(a, b), STRGE(a, b), STRLE(a, b), b)
}
func STREQ(a, b string) bool {
 return a == b
}
func STRNE(a, b string) bool {
 return a != b
}
func STRGT(a, b string) bool {
 return a > b
}
func STRLT(a, b string) bool {
 return a < b
}
func STRGE(a, b string) bool {
 return a >= b
}
func STRLE(a, b string) bool {
 return a <= b
}
// Compare two strings to see if one is lexically ordered before than the other
package main
import "fmt"
func main() {
 a := "ball"
 b := "bell"
 fmt.Printf("%s%2d%2d%2d%2d%2d%2d %sn", a, !STRLT(a, b), STRGT(a, b), STRLE(a, b), STRGE(a, b), !STRLE(b, a), !STRLE(a, b), b)
}
func STREQ(a, b string) bool {
 return a == b
}
func STRNE(a, b string) bool {
 return a != b
}
func STRGT(a, b string) bool {
 return a > b
}
func STRLT(a, b string) bool {
 return a < b
}
func STRGE(a, b string) bool {
 return a >= b
}
func STRLE(a, b string) bool {
 return a <= b
}
// Compare two strings to see if one is lexically ordered after than the other
package main
import "fmt"
func main() {
 a := "ball"
 b := "bell"
 fmt.Printf("%s%2d%2d%2d%2d%2d%2d %sn", a, !STRGT(a, b), STRLT(a, b), STRLE(a, b), STRGE(a, b), !STRGE(b, a), !STRGE(a, b), b)
}
func STREQ(a, b string) bool {
 return a == b
}
func STRNE(a, b string) bool {
 return a != b
}
func STRGT(a, b string) bool {
 return a > b
}
func STRLT(a, b string) bool {
 return a < b
}
func STRGE(a, b string) bool {
 return a >= b
}
func STRLE(a, b string) bool {
 return a <= b
}
// Compare two strings to see if one is lexically ordered after than the other (ignoring case)
package main
import "fmt"
func main() {
 a := "ball"
 b := "bell"
 fmt.Printf("%s%2d%2d%2d%2d%2d%2d %s ignoring casen", a, !STRCGT(a, b), STRCGE(a, b), STRCGE(b, a), !STRCGE(b, a), !STRCGE(a, b), STRCGE(a, b), b)
}
func STREQ(a, b string) bool {
 return a == b
}
func STRNE(a, b string) bool {
 return a != b
}
func STRGT(a, b string) bool {
 return a > b
}
func STRLT(a, b string) bool {
 return a < b
}
func STRGE(a, b string) bool {
 return a >= b
}
func STRLE(a, b string) bool {
 return a <= b
}
// Compare two strings to see if one is lexically ordered before than the other (ignoring case)
package main
import "fmt"
func main() {
 a := "ball"
 b := "bell"
 fmt.Printf("%s%2d%2d%2d%2d%2d%2d %s ignoring casen", a, !STRCGE(a, b), STRCGE(b, a), STRCGE(a, b), !STRCGE(b, a), !STRCGE(a, b), STRCGE(a, b), b)
}
func STREQ(a, b string) bool {
 return a == b
}
func STRNE(a, b string) bool {
 return a != b
}
func STRGT(a, b string) bool {
 return a > b
}
func STRLT(a, b string) bool {
 return a < b
}
func STRGE(a, b string) bool {
 return a >= b
}
func STRLE(a, b string) bool {
 return a <= b
}

