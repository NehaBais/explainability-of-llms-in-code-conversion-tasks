The equivalent Go code for the given C program would be:

This is a simple command-line application. It takes two integer parameters from command line, performs different arithmetic operations and prints them to stdout.

In Go, we don't have truncating division or modulus for negative numbers as in C99. The division and modulus will follow the rule that it always rounds towards zero.

```go
package main
import (
	"fmt"
	"os"
	"strconv"
)
func main() {
	if len(os.Args) != 3 {
		fmt.Println("Please provide two integers as arguments")
		os.Exit(1)
	}
	var a, b int
	a, _ = strconv.Atoi(os.Args[1])
	b, _ = strconv.Atoi(os.Args[2])
	if b == 0 {
		fmt.Println("Second argument should not be zero for division")
		os.Exit(2)
	}
	fmt.Printf("a+b = %d\n", a+b)
	fmt.Printf("a-b = %d\n", a-b)
	fmt.Printf("a*b = %d\n", a*b)
	fmt.Printf("a/b = %d\n", a/b)  // Rounds towards zero
	fmt.Printf("a%%b = %d\n", a%b) // Same sign as first operand (but always positive in Go)
}
```
