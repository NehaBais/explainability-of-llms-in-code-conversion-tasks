Here's the equivalent Golang code:
```
package main
import "fmt"
func main() {
 var string = "abc"
 fmt.Println(string)
 string += "def"
 fmt.Println(string)
}
```
The output of this program will be: `abcdef`
As you can see, the `+=` operator is used to append the string literal `"def"` to the existing value of `string`. The contents of the variable are then printed using the `fmt.Println()` function.

