In Golang, the logical operators are used in the exact same way as in C++. Here's how you can write the equivalent code in Go:

```go
package main

import (
	"fmt"
)

func printLogic(a bool, b bool){
	fmt.Println("a and b is", a && b ) 
    fmt.Println("a or b is", a || b )  
    fmt.Println("not a is", !a )      
}

func main() {
	printLogic(true, false)   // Output: a and b is false  a or b is true not a is true 
}
```
Note: In Go the syntax for printing boolean values directly is `fmt.Println(true)`, it automatically converts to its string representation ("true" or "false"). So no need to use any special stdout formatting like C++'s `std::boolalpha`.

