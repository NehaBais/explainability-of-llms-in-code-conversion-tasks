The equivalent Golang code for the given JavaScript code is as follows:
```go
package main
import (
    "fmt"
)
func main() {
    s1 := "Hello"
    s1 += ", World!"
    fmt.Println(s1)
}
```
In this case, we are using the `+=` operator to append the string `"World!"` to the existing value of `s1`.
This operator is used in both JavaScript and Golang for concatenating strings.
The print statement `fmt.Println(s1)` can be used to output the contents of the variable after the append operation.
