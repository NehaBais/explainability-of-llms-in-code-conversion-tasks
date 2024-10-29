In Golang, the equivalent code would be as follows -

```go
package main

import (
	"fmt"
)

func main() {
	s1 := "hello"
	fmt.Println(s1 + " world") //prints hello world
	
	s2 := s1 + " world" 
	fmt.Println(s2) //prints hello world
  
	s3 := fmt.Sprintf("%s, %s, %s", s1, "world", "mom")
	fmt.Println(s3) //prints hello, world, mom
	
	//In Golang there is no direct equivalent of Python's join for strings so we use Sprintf as an alternative.
}
```

Golang does not have a built-in string concatenation operator like `+` in python. We instead can use the `fmt.Sprintf()` method to format and return a new string without modifying any of the input strings, which is equivalent to Python's `str.__add__` or `'string'.join()` methods.

