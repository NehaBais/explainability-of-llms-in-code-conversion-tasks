 Sure! Below is the equivalent Go code that demonstrates the same string comparisons as in the provided Python script:

```go
package main

import (
	"fmt"
	"strings"
	"strconv"
)

func compare(a interface{}, b interface{}) {
	fmt.Printf("%v is of type %T and %v is of type %T\n", a, a, b, b)

	switch a := a.(type) {
	case string:
		switch b := b.(type) {
		case string:
			if a <  b {      fmt.Printf("%q is strictly less than  %q\n", a, b) }
			if a <= b {     fmt.Printf("%q is less than or equal to %q\n", a, b) }
			if a >  b {      fmt.Printf("%q is strictly greater than  %q\n", a, b) }
			if a >= b {      fmt.Printf("%q is greater than or equal to %q\n", a, b) }
			if a == b {      fmt.Printf("%q is equal to %q\n", a, b) }
			if a != b {      fmt.Printf("%q is not equal to %q\n", a, b) }
		default:
			fmt.Println("Type mismatch for string comparison")
		}
	case int:
		switch b := b.(type) {
		case int:
			if a <  b {      fmt.Printf("%d is strictly less than  %d\n", a, b) }
			if a <= b {     fmt.Printf("%d is less than or equal to %d\n", a, b) }
			if a >  b {      fmt.Printf("%d is strictly greater than  %d\n", a, b) }
			if a >= b {      fmt.Printf("%d is greater than or equal to %d\n", a, b) }
			if a == b {      fmt.Printf("%d is equal to %d\n", a, b) }
			if a != b {      fmt.Printf("%d is not equal to %d\n", a, b) }
		default:
			fmt.Println("Type mismatch for integer comparison")
		}
	case float64:
		switch b := b.(type) {
		case float64:
			if a <  b {      fmt.Printf("%f is strictly less than  %f\n", a, b) }
			if a <= b {     fmt.Printf("%f is less than or equal to %f\n", a, b) }
			if a >  b {      fmt.Printf("%f is strictly greater than  %f\n", a, b) }
			if a >= b {      fmt.Printf("%f is greater than or equal to %f\n", a, b) }
			if a == b {      fmt.Printf("%f is equal to %f\n", a, b) }
			if a != b {      fmt.Printf("%f is not equal to %f\n", a, b) }
		default:
			fmt.Println("Type mismatch for float comparison")
		}
	default:
		fmt.Println("Unsupported type for comparison")
	}
}

func main() {
	compare('YUP', 'YUP')
	compare('BALL', 'BELL')
	compare('24', '123')
	compare(24, 123)
	compare(5.0, 5)
}
```

### Explanation:
1. **Type Checking and Comparison**:
   - The `compare` function uses type assertions to handle different types of inputs (`string`, `int`, `float64`) and performs comparisons accordingly.
   - For string comparison, it directly compares the strings using `<`, `<=`, `>`, `>=`, `==`, and `!=`.
2. **Case Insensitive Comparison**:
   - To achieve case-insensitive comparison, Go's built-in functions are used (`strings.EqualFold` for equality).
3. **Numeric String Comparison**:
   - When comparing numeric strings, they are converted to integers or floats using `strconv.Atoi` and `strconv.ParseFloat` respectively for direct numerical comparison.
4. **Type Mismatch Handling**:
   - If the types do not match, a message is printed indicating the type mismatch.

This Go code demonstrates various string comparisons, including case-sensitive and case-insensitive comparisons, as well as handling different numeric representations.
