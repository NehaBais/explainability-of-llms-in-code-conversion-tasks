Sure, here's the equivalent Golang code for the given requirements:
```
package main
import "fmt"
func main() {
 stringA := "tacoloco"
 stringB := "co"
 q1 := strings.HasPrefix(stringA, stringB)
 q2 := strings.Contains(stringA, stringB)
 var q2matches []int
 q2multi := regexp.MustCompile(stringB)
 for m := q2multi.FindAllStringIndex(stringA, -1); len(m) > 0; m = q2multi.FindAllStringIndex(stringA, -1) {
 for _, n := range m {
 q2matches = append(q2matches, n[0])
 }
 }
 q3 := strings.HasSuffix(stringA, stringB)
 fmt.Println("1: Does '"+stringA+"' start with '"+stringB+"'? ", q1)
 fmt.Println("2: Is '"+stringB+"' contained in '"+stringA+"'? ", q2)
 if q2 && len(q2matches) > 1 {
 fmt.Printf("   In fact, it happens %d times within '%s', at index%s %v.", len(q2matches), stringA, (len(q2matches) > 1 ? "es" : ""), q2matches)
 }
 fmt.Println("3: Does '"+stringA+"' end with '"+stringB+"'? ", q3)
}
```
This code uses the built-in functions in Golang for string matching and manipulation, such as `strings.HasPrefix()`, `strings.Contains()`, `regexp.MustCompile()`, `FindAllStringIndex()`, and `HasSuffix()`. The output will be similar to the JavaScript output, demonstrating the three types of string matching.

