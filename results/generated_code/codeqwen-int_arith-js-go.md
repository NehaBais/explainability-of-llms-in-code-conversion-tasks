Below is the equivalent code in Golang:

```go
package main

import (
	"fmt"
	"os"
	"strconv"
)

func main() {
	if len(os.Args) != 3 {
		fmt.Println("Usage: go run script_name.go <A> <b>")
		return
	}

	A, err1 := strconv.Atoi(os.Args[1])
	b, err2 := strconv.Atoi(os.Args[2])

	if err1 != nil || err2 != nil {
		fmt.Println("Error: One or both of the inputs are not valid integers.")
		return
	}

	sum := A + b
	difference := A - b
	product := A * b
	division := float64(A) / float64(b)
	remainder := A % b // this produces the remainder after dividing 'b' into 'A'. The '%' operator is called the 'modulo' operator.

	fmt.Printf("A + b = %d\n", sum)  // The %d syntax is a placeholder that is replaced by the sum
	fmt.Printf("A - b = %d\n", difference)
	fmt.Printf("A * b = %d\n", product)
	fmt.Printf("A / b = %f\n", division)  // Golang does not have a built-in integer rounding so we use float64 for division to get accurate quotient
	if remainder < 0 && A >= 0 || remainder > 0 && A < 0 {
		fmt.Printf("A %% b = %d\n", remainder)  // The sign of the first operand is used for the remainder if they are different.
	} else {
		fmt.Printf("A %% b = %d\n", abs(remainder))  // If signs are same, then use absolute value of the remainder.
	}

	func abs(x int) int {
		if x < 0 {
			return -x
		}
		return x
	}

}
```

Please note that Golang does not have built-in integer rounding and hence we're converting the division result to float64 before printing it. Also, for remainder calculation, we've implemented a helper function abs() which returns absolute value of the input number.
