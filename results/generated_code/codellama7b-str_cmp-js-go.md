
In Go, you can compare strings using the `==`, `!=`, `<`, and `>` operators. These operators will perform lexical comparisons, which means that they will compare the strings based on their alphabetical order.

Here is an example of how to compare strings in Go:
```go
package main

import "fmt"

func main() {
    s1 := "abcd"
    s2 := "dcba"

    fmt.Println(s1 == s2) // true
    fmt.Println(s1 != s2) // false
    fmt.Println(s1 < s2) // true
    fmt.Println(s1 > s2) // false
}
```
In this example, we define two strings `s1` and `s2`. We then compare them using the `==`, `!=`, `<`, and `>` operators. The results of these comparisons are printed to the console.

You can also use the `strings.Compare()` function to perform case-insensitive string comparison in Go. This function returns a negative value if the first string is less than the second, a positive value if the first string is greater than the second, and zero if the strings are equal.

package main

import (
    "fmt"
    "strings"
)

func main() {
    s1 := "abcd"
    s2 := "dcba"

    fmt.Println(strings.Compare(s1, s2)) // -1
}

It's worth noting that Go does not provide a way to perform numeric string comparison without using a custom function or library. If you need to compare numeric strings in Go, you can use the `strconv` package to convert them to numbers and then perform numerical comparison.

package main

import (
    "fmt"
    "strconv"
)

func main() {
    s1 := "123"
    s2 := "456"

    n1, _ := strconv.Atoi(s1) // convert to integer
    n2, _ := strconv.Atoi(s2) // convert to integer

    fmt.Println(n1 < n2) // false
}
