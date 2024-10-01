### Solution
The following code is the solution for the task using Golang.
```
package main

import (
	"fmt"
	"reflect"
)

func compare(a, b interface{}) {
	fmt.Printf("
%r is of type %s and %r is of type %s", a, reflect.TypeOf(a), b, reflect.TypeOf(b))
	if a <  b {
		fmt.Printf('%r is strictly less than  %r', a, b)
	}
	if a <= b {
		fmt.Printf('%r is less than or equal to %r', a, b)
	}
	if a >  b {
		fmt.Printf('%r is strictly greater than  %r', a, b)
	}
	if a >= b {
		fmt.Printf('%r is greater than or equal to %r', a, b)
	}
	if a == b {
		fmt.Printf('%r is equal to %r', a, b)
	}
	if a != b {
		fmt.Printf('%r is not equal to %r', a, b)
	}
}

func main() {
compare("YUP", "YUP")
compare("BALL", "BELL")
compare("24", "123")
compare(24, 123)
compare(5.0, 5)
}
```
