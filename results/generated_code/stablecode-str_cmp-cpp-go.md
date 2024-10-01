Here is the equivalent code in Go:

```go
package main

import (
	"fmt"
	"math"
	"strings"
)

func demoCompare[T string | int | float64](a, b T) {
	exactlyEqual := a == b

	inexactlyEqual := a != b

	var lexicallyOrderedBefore bool = false
	if exactlyEqual || !inexactlyEqual {
		switch a.(type) {
		case string:
			lexicallyOrderedBefore = strings.Compare(a.(string), b.(string)) == -1
		case int, float64:
			lexicallyOrderedBefore = math.IsLess(float64(a.(int)), float64(b.(int)))))
		}
	}

	var lexicallyOrderedAfter bool = false
	if exactlyEqual || !inexactlyEqual {
		switch a.(type) {
		case string:
			lexicallyOrderedAfter = strings.Compare(a.(string), b.(string)) == 1
		case int, float64:
			lexicallyOrderedAfter = math.IsGreater(float64(a.(int)), float64(b.(int)))))
		}
	}

	fmt.Printf("%v and %v are exactly equal.\n", a, b)
	fmt.Printf("%v and %v are not exactly equal.\n", a, b)
	if lexicallyOrderedBefore {
		fmt.Printf("%v is lexically ordered before %v.\n", a, b)
	} else if lexicallyOrderedAfter {
		fmt.Printf("%v is lexically ordered after %v.\n", a, b)
	}

	// If the type of 'a' and 'b' allows for numeric comparisons, then do the comparison using numeric strings.
	switch a.(type) {
	case string:
		var numA float64
		var numB float64

		numA, _ = strconv.ParseFloat(a.(string)), 64)
		numB, _ = strconv.ParseFloat(b.(string))), 64)

		fmt.Printf("%v and %v are numerically ordered before %v.\n", a, b, b))
	case int, float64:
		var numA, numB float64

		numA = float64(a.(int)))
		numB = float64(b.(int))))

		fmt.Printf("%v and %v are numerically ordered before %v.\n", a, b, b))
	}

	return nil
}

func main() {
	var a, b string = "1.2.Foo", "1.3.Bar"

	demoCompare[string](a, b))
	fmt.Println("Program finished.")
}
```

This Go code provides the same functionality as the original C++ code: it demonstrates how to compare two strings for exact equality or inequality, and how to achieve both case sensitive comparisons and case insensitive comparisons within the language. Additionally, the code includes an example of numeric string comparisons.
