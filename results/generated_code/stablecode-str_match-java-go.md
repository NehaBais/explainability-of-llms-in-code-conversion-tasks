Here is the conversion of your Java code to Golang:

```go
package main

import (
	"fmt"
)

func main() {

    // Part 1 
    fmt.Println("Does 'abcd' start with 'ab'? ", "abcd".StartsWith("ab"))

    // Part 2 
    fmt.Println("Does 'abcd' contain 'bb'? ", "abcd".Contains("bb"))
    fmt.Println("Does 'abab' contain 'ab'? ", "abab".Contains("ab"))
    loc := -1
    loc = strings.Index("abab", "bb") //returns -1
    loc = strings.Index("abab", "ab", loc+1)) // returns 2
}
```
Please note that the Java method `String.startsWith()` returns a boolean and doesn't throw an exception if one of the input string is `nil`. Golang's `strings.Index()` function also returns -1 when the substring is not found. Therefore, you don't need to check for `nil` string in your Golang code.
