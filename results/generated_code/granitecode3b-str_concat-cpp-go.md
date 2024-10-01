Sure, here's the code in Golang that performs the same operation:
```
package main
import (
 "fmt"
)
func main() {
 s := "hello"
 fmt.Println(s + " literal")
 s2 := s + " literal"
 fmt.Println(s2)
}
```
This code creates two string variables `s` and `s2`, with the value "hello" assigned to `s`. It then uses the `+` operator to concatenate a string literal to `s`, creating `s2`. Finally, it prints the values of both variables using `fmt.Println()`.

