 In Go language, we can use the `==` and `!=` operators to compare strings for exact equality and inequality respectively. The less than `<`, greater than `>`, less or equal to `<=` and greater or equal to `>=` comparison operators are used in a similar way to their C counterparts but they return boolean values instead of integers.

The lexical ordering can be demonstrated by using the `strings.Compare` function, which returns -1 if string a is smaller than b, 0 if they are equal and 1 if a is greater than b.

Also, case sensitive and case insensitive comparisons can be achieved by using the `strings.EqualFold` or `unicode.Compare` functions respectively.

For numeric strings comparison, Go language doesn't treat them as numbers for comparison directly. We should first convert these strings to integers or float64. Below is a simple example:
```go
package main
import (
    "fmt"
    "strings"
)
func main() {
    var s1, s2 string
    s1 = "5" // numeric string 1
    s2 = "3" // numeric string 2
    
    if strings.Compare(s1, s2) > 0 {
        fmt.Println("s1 is larger than s2")
    } else if strings.Compare(s1, s2) < 0 {
        fmt.Println("s1 is smaller than s2")
    } else {
        fmt.Println("s1 and s2 are equal")
    }
}
```
