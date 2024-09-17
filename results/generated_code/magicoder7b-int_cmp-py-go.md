 Here is the equivalent Go code for your Python script. This will read in two integers from the user and then make comparisons using if statements:

```go
package main

import (
	"fmt"
	"os"
	"strconv"
)

func main() {
	// Get two integers from the user
	var a int
	var b int

	_, err := fmt.Scan(&a)
	if err != nil {
		fmt.Printf("Failed to read input: %v", err)
	}

	_, err = fmt.Scan(&b)
	if err != nil {
		fmt.Printf("Failed to read input: %v", err)
	}

	// Compare the integers and print a message depending on the condition
	if a < b {
		fmt.Println(a, "is less than", b)
	} else if a > b {
		fmt.Println(a, "is greater than", b)
	} else if a == b {
		fmt.Println(a, "is equal to", b)
	}
}
```

To run this Go code, you can use the `go run` command in your terminal:

```bash
go run filename.go
```
