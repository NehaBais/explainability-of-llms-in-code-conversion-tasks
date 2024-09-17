In Go, you can use the `os` package to access command line arguments. Here is a direct conversion:

```go
package main

import (
	"fmt"
	"os"
	"strconv"
)

func main() {
	if len(os.Args) < 3 {
		fmt.Println("You need to provide two integer arguments")
		return
	}

	a, err1 := strconv.Atoi(os.Args[1])
	b, err2 := strconv.Atoi(os.Args[2])

	if err1 != nil || err2 != nil {
		fmt.Println("Arguments are not integers")
		return
	}

	sum := a + b
	difference := a - b
	product := a * b
	division := a / b
	remainder := a % b

	fmt.Printf("a + b = %d\n", sum)
	fmt.Printf("a - b = %d\n", difference)
	fmt.Printf("a * b = %d\n", product)
	fmt.Printf("a / b = %d, rounding towards zero\n", division)
	fmt.Printf("a %% b = %d, sign matches the sign of the first operand if different\n", remainder)
}
```

You can run the program with the two numbers as arguments like:

```bash
go run script_name.go <a> <b>
```

Replace `<a>` and `<b>` with your integers. The `%d` in `Printf` is a format specifier that replaces the next argument with the integer, similar to JavaScript's `%d`. If the arguments are not integers, the program will print an error message.
