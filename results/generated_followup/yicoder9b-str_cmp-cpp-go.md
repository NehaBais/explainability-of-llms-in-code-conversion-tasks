The error is because Go does not support operator overloading, meaning it does not support comparing different types directly using less than (<) or greater than (>) operators. It requires explicit type conversion before comparison. Also, the variables equals, notEquals, less and greater declared in demoCompare function are unused. 

To fix this error:
- Convert a and b to float64 type in strconv.ParseFloat during numeric comparison. This way, both a and b become of same type (float64) which can be compared directly using < or > operators.
- Remove the equals, notEquals, less and greater variables from demoCompare function as they are not used.

Here is how you write it:
```go
package main

import (
	"fmt"
	"strconv"
	"strings"
)

func demoCompare(a, b interface{}, semantically string) {
    if a == b { 
        fmt.Printf("%v and %v are exactly %s equal.\n", a, b, semantically)
    } else {
        fmt.Printf("%v and %v are not exactly %s equal.\n", a, b, semantically)
    } 

	if a != b { 
		fmt.Printf("%v and %v are inequality.\n", a, b, semantically)
	} else {
        fmt.Printf("%v and %v are not inequality.\n", a, b, semantically)
    }  

    if a < b{ 
		fmt.Printf("%v is ordered before %v.\n", a, b, semantically)
	} else {
        fmt.Printf("%v is not ordered before %v.\n", a, b, semantically)
    }  

	if a > b{ 
		fmt.Printf("%v is ordered after %v.\n", a, b, semantically)
	} else {
        fmt.Printf("%v is not ordered after %v.\n", a, b, semantically)
    }  
}

func main() {
	a := "1.2.Foo"
	b := "1.3.Bar"
	demoCompare(a, b, "lexically")

	// Case-insensitive comparisons by converting both strings to lowercase.
	a = strings.ToLower(a)
	b = strings.ToLower(b)
	demoCompare(a, b, "lexically")

	numA, _ := strconv.ParseFloat(a, 64) //assume error handling is done in context
	numB, _ := strconv.ParseFloat(b, 64)
	demoCompare(numA, numB, "numerically")
}
```
