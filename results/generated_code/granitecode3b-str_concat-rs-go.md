Sure! Here's the equivalent Golang code:
```
package main
import "fmt"
func main() {
	s := "hello"
	fmt.Println(s)
	
	s1 := s + " world"
	fmt.Println(s1)
}
```
This code creates a string variable `s` and assigns it the value `"hello"` using the `to_owned()` method, which is available in Rust but not Golang. 
Then, it concatenates `s` with the string literal `" world"` and stores the result in `s1`. Finally, it prints out the content of both variables using the `println()` function. 
Note that in Golang, there's no need to manually manage memory allocation for strings - strings are represented as a slice of bytes under the hood.

