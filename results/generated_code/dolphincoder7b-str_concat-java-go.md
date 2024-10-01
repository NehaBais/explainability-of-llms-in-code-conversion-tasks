In Golang, the equivalent code would be:
```
package main
import "fmt"
func main() {
   var s string = "hello"
   fmt.Println(s + " literal")
   var s2 string = s + " literal"
   fmt.Println(s2)
}
```
This program creates two string variables, `s` and `s2`, both initialized with the value "hello". Then, it prints the concatenation of `s` and the string literal " literal", and then it also prints the value of `s2`.
