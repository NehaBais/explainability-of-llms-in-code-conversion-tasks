 Below is the equivalent Go code for your C function:

```Go
package main

import (
	"fmt"
)

func print_logic(a, b bool) {
	fmt.Printf("a and b is %v\n", a && b)
	fmt.Printf("a or b is %v\n", a || b)
	fmt.Printf("not a is %v\n", !a)
}

func main() {
	// For example, you can call the function with true and false values like this:
	print_logic(true, false)
}
```
This Go function does essentially the same thing as your C function. It takes two boolean parameters (notice that Go doesn't have a distinct `int` type for booleans, unlike C), and prints out whether the "and", "or" and "not" operations produce true or false on these inputs. You can call this function from your main function to test it with different inputs.
