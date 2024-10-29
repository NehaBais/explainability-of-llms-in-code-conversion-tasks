The equivalent code in Golang would be:

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
		b, ok := b.(string)
		if !ok {
			fmt.Println("Types are not comparable")
			return
		}
		if a < b {
			fmt.Printf("%q is lexically less than %q\n", a, b)
		}
		if a <= b {
			fmt.Printf("%q is lexically less than or equal to %q\n", a, b)
		}
		if a > b {
			fmt.Printf("%q is lexically greater than %q\n", a, b)
		}
		if a >= b {
			fmt.Printf("%q is lexically greater than or equal to %q\n", a, b)
		}
		if a == b {
			fmt.Printf("%q is equal to %q\n", a, b)
		}
		if a != b {
			fmt.Printf("%q is not equal to %q\n", a, b)
		}
	default:
		fmt.Println("Only strings can be compared lexically")
		return
	}
}

func main() {
	compare("YUP", "YUP")
	compare("BALL", "BELL")
	compare("24", "123")
	// compare(24, 123) //This line would cause a compile-time error.
	compare(strings.ToLower("24"), strings.ToLower("123")) //Case insensitive comparison
	fmt.Println()
	i := 5.0
	j := 5
	// compare(i, j)  //This line would cause a compile-time error.
	fmt.Printf("%v is of type %T and %v is of type %T\n", i, i, j, j)
	if i < float64(j) {
		fmt.Printf("%v is numerically less than %v\n", i, j)
	}
	// Rest of the code for lexical comparison...
}
```
In Golang, you cannot directly compare different types (i.e., int and string). However, by using an interface{} type parameter in function `compare()`, which can be any type, we are able to perform lexical comparison of strings. If the inputs aren't strings, it will throw a compile-time error.

In case you want to handle numeric strings as integers or floating point numbers, you would first have to convert them back into their original types before comparing them. We do this by converting "24" and "123" to float64(5) and int(5) respectively in main function.

Also note that case-insensitive comparison is achieved with `strings.ToLower` method. This method converts all the characters of a string to lowercase which can be used as per requirement for case insensitive comparisons. 

In Golang, type assertion is performed using the syntax "value.(Type)". In this code, we are checking whether 'a' can be asserted to string. If it cannot, it means types are not comparable and an error message is printed out accordingly. This functionality allows us to handle comparison of different data types in a single function that takes any two arguments.

