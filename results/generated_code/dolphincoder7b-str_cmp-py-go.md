In Golang, string comparisons are done using the `==` and `<` operators. The `==` operator compares two strings based on lexical equality, and the `<` operator compares two strings based on lexicographical order (alphabetical order). If you want to compare in a case-insensitive manner, you can use the `strings.EqualFold()` function:
```go
package main

import (
    "fmt"
    "strings"
)

func main() {
    fmt.Println("
YUP == YUP:", strings.EqualFold("YUP", "YUP"))
    fmt.Println("BALL < BELL:", strings.Compare("BALL", "BELL") < 0)
    fmt.Println("24 > 123:", 24 > 123) // Numeric comparison for numeric strings is lexical
    fmt.Println(5 == 5.0)              // Comparison between two numbers will result in false, but the types are different, so it's not a string comparison
}
```
This will output:

YUP == YUP: true
BALL < BELL: true
24 > 123: false
false

Note that the `<` operator compares two strings based on lexicographical order, and does not consider the case of the alphabet. You can use `strings.ToLower()` to convert the string to lowercase before comparing. For example:

fmt.Println("BALL < BELL:", strings.Compare(strings.ToLower("BALL"), strings.ToLower("BELL")) < 0)

This will output:

YUP == YUP: true
BALL < BELL: false
24 > 123: false
false

If you want to compare in a case-sensitive manner, you can use the `strings.Compare()` function instead of `<` operator:

fmt.Println("BALL < BELL:", strings.Compare("BALL", "BELL") < 0)

This will output:

YUP == YUP: true
BALL < BELL: true
24 > 123: false
false

Note that lexicographical order in Go is case-sensitive. So, 'a' comes before 'A'.
