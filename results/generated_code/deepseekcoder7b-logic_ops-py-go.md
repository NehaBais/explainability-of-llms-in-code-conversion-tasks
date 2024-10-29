In Golang, you can use the "&&" for logical "and", "||" for logical "or" and "!" for "not". Here's how to convert your Python code into Go.

```go
package main

import (
	"fmt"
)

func logic(a bool, b bool) {
	fmt.Println("a && b:", a && b) // and operation
	fmt.Println("a || b:", a || b) // or operation
	fmt.Println("!a:", !a)         // not operation
}
```

In the above code, `fmt.Println` is used to print output in Go which works similar to `print` function of Python. 
- The "&&\" operator returns true if both conditions are true and false otherwise.
- The "||" operator returns true if at least one condition is true else it returns false. 
- The "!" operation negates the boolean value i.e., if a is true, then !a will be false and vice versa.

