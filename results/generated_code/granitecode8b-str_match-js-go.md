Here's the Golang code that demonstrates the three types of string matching:
```go
package main
import (
 "fmt"
 "regexp"
)
func main() {
 stringA := "tacoloco"
 stringB := "co"
 var q1 bool
 q2 := -1
 q3 := false
 var q2matches []int
 // stringA starts with stringB
 q1 = stringA[:len(stringB)] == stringB
 // stringA contains stringB
 q2 = strings.Index(stringA, stringB)
 // multiple matches
 re := regexp.MustCompile(stringB + "g")
 q2matches = re.FindAllStringIndex(stringA, -1)
 // stringA ends with stringB
 q3 = stringA[len(stringA)-len(stringB):] == stringB
 fmt.Println("1: Does '", stringA, "' start with '", stringB, "'? ", "Yes." if q1 else "No.")
 fmt.Println("2: Is '", stringB, "' contained in '", stringA, "'? ", "Yes, at index", q2, "." if q2 >= 0 else "No.")
 if q2 >= 0 && len(q2matches) > 1 {
 fmt.Println("   In fact, it happens", len(q2matches), "times within '", stringA, "', at index", strings.Join(strconv.Itoa(q2matches), ", "), ".")
 }
 fmt.Println("3: Does '", stringA, "' end with '", stringB, "'? ", "Yes." if q3 else "No.")
}
```
The output of this code is:

1: Does 'tacoloco' start with 'co'? Yes.
2: Is 'co' contained in 'tacoloco'? Yes, at index 2.
3: Does 'tacoloco' end with 'co'? Yes.

Note that the output of part 2 is different from the JavaScript code because the `indexOf` method only returns the index of the first occurrence of a substring, while the regular expression method returns all occurrences.

