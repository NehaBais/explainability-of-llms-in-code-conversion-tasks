Here's the equivalent code in Golang:
```go
package main
import "fmt"
func logic(a, b bool) {
 fmt.Printf("a and b: %t and %t is %tn", a, b, a && b)
 fmt.Printf("a or b: %t or %t is %tnn", a, b, a || b)
 fmt.Printf("not a: not %t is %t", a, !a)
}
func main() {
 logic(true, false)
 logic(false, true)
 logic(true, true)
 logic(false, false)
}
```
The output of this code will be:

a and b: true and false is falsen
a or b: true or false is truen
not a: not false is truen
a and b: false and true is falsen
a or b: false or true is truen
not a: not true is falsen
a and b: false and false is falsen
a or b: false or false is falsenn
not a: not false is truen

