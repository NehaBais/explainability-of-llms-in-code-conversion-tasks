 In Golang, there is no direct equivalent of Rust's env::args().collect() for getting the command line arguments. Hence, you will need to parse the command-line arguments in Go using os.Args and then convert them into integers with strconv.Atoi() or strconv.ParseInt(). Here is how you can do it:

```go
package main

import (
	"fmt"
	"os"
	"strconv"
)

func main() {
	args := os.Args[1:]
	a, _ := strconv.Atoi(args[0])
	b, _ := strconv.Atoi(args[1])

	fmt.Printf("sum:              %d\n", a+b)
	fmt.Printf("difference:       %d\n", a-b)
	fmt.Printf("product:          %d\n", a*b)
	fmt.Printf("integer quotient: %d\n", a/b) // truncates towards zero
	fmt.Printf("remainder:        %d\n", a%b) // same sign as first operand
}
```

Please note that Go doesn't have an integer division operation that rounds towards zero by default, unlike Rust. For this scenario, we need to explicitly use the `//` operator for floor division which will round towards negative infinity.

Also note that error handling is omitted in the above code because it wasn't included in your Rust version. If you wanted to include proper error handling, you might consider adding a function call after strconv.Atoi() to check if there was an error and handle it appropriately.
