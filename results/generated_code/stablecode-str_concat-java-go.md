Here is the equivalent Golang code:

```go
package main

import "fmt"

func main() {

    var s string = "hello"
    fmt.Println(s + " literal"))

    s2 := s + " literal"
    fmt.Println(s2)
}
```
This Golang code creates a variable of type string (denoted by `string`)), then assigns it the value "hello". It does this using the syntax `var s string = "hello"` - which is equivalent to its Java counterpart. 

Then, it prints out the result of concatenating the original string with another string literal (`"literal"`). 

It achieves this by first using the `+` operator to concatenate the original string (denoted by `s`) and the string literal ("literal") - which results in "hello literal". This is then passed as an argument to the `fmt.Println()` function, which prints out its argument.

This process is repeated for a second string variable (`s2`)), this time concatenating it with another string literal (`"literal"`). The resulting value of `s2` is then printed out using the `fmt.Println()` function.
