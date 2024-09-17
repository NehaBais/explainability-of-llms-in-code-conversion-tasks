The given C code is already written in Go, so there is no conversion needed. Here's the exact version of it:

```go
package main

import "fmt"
import "strconv"
import "os"

func main() {
	if len(os.Args) != 3 {
		fmt.Println("Usage: program [A] [b]")
		return
	}

	a, err1 := strconv.Atoi(os.Args[1])
	b, err2 := strconv.Atoi(os.Args[2])

	if err1 != nil || err2 != nil {
		fmt.Println("Error: Invalid input")
		return
	}

	sum := A + b
	difference := A - b
	product := A * b
	quotient := A / b  // Go's integer division truncates towards 0 (in C99)
	remainder := A % b // same sign as first operand (in C99)

	fmt.Printf("A+b = %d\n", sum)
	fmt.Printf("A-b = %d\n", difference)
	fmt.Printf("A*b = %d\n", product)
	fmt.Printf("A/b = %d\n", quotient)
	fmt.Printf("A%%b = %d\n", remainder)
}
```

In Go, there is no need to check if the input was a valid integer (like in C), so you can directly use `strconv.Atoi()` without any error checking. 

For exponentiation, Go doesn't have built-in support for it. You may want to create your own function for this purpose or use a third-party library if needed.
