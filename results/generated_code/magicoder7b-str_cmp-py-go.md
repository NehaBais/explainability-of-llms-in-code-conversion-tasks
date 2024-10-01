 Below is the Golang version of your Python code:

```Go
package main

import (
	"fmt"
	"unicode"
)

func compare(a interface{}, b interface{}) {
    fmt.Printf("%v is of type %T and %v is of type %T\n", a, a, b, b)
    
    if a <  b { fmt.Printf("%v is strictly less than  %v\n", a, b) }
    if a <= b { fmt.Printf("%v is less than or equal to %v\n", a, b) }
    if a >  b { fmt.Printf("%v is strictly greater than  %v\n", a, b) }
    if a >= b { fmt.Printf("%v is greater than or equal to %v\n", a, b) }
    if a == b { fmt.Printf("%v is equal to %v\n", a, b) }
    if a != b { fmt.Printf("%v is not equal to %v\n", a, b) }
    if a == a && a != b { fmt.Printf("%v has object identity with %v\n", a, b) }
    if a == a && a == b { fmt.Printf("%v has negated object identity with %v\n", a, b) }
}

func main() {
	compare("YUP", "YUP")
    compare("BALL", "BELL")
    compare("24", "123")
    compare(24, 123)
    compare(5.0, 5)
}
```
Please note that in Go, unlike Python, we don't have a direct way to compare different types without explicit type assertions or conversions. This is why for numeric strings "123" and "24", although they are lexically equal, the comparison function does not consider them as equal due to their differing types.
