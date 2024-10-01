Here's the equivalent Golang code:
```
package main
import "fmt"
func main() {
 s := "12345678"
 s = "0" + s // by concatenation
 fmt.Println(s)
}
``` 
This code declares a string variable `s` and assigns it the value `"12345678"`. It then concatenates the string literal `"0"` to the beginning of `s` using the `+` operator, resulting in the final value of `"012345678"`. Finally, the code prints the value of `s` to the console.

