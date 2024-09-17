The given Rust code reads two integers from the user, stores them in variables `A` and `b`, and then checks whether A is less than, equal to or greater than B.

Here is the equivalent Go code:

```go
package main

import (
	"fmt"
	"bufio"
	"os"
)

func main() {
	reader := bufio.NewReader(os.Stdin)
	fmt.Println("Enter two integers separated by a space")
	text, _ := reader.ReadString('\n')
	nums := parseInput(text)
	A := nums[0]
	b := nums[1]

	if A < b {
		fmt.Printf("%d is less than %d", A, b)
	} else if A == b {
		fmt.Printf("%d equals %d", A, b)
	} else if A > b {
		fmt.Printf("%d is greater than %d", A, b)
	}
}

func parseInput(input string) []int {
	nums := make([]int, 2)
	_, err := fmt.Sscan(input, &nums[0], &nums[1])
	if err != nil {
		fmt.Println("Error parsing input", err)
		os.Exit(1)
	}
	return nums
}
```

The Go code does the same thing as the Rust code: it prompts the user for two integers, stores them in variables `A` and `b`, then checks whether A is less than, equal to or greater than B. The difference between the two codes is that Go doesn't need to manually create a new vector for the input numbers (unlike Rust), and it uses `fmt.Sscan()` function to convert string into integer.
