Here's how you can convert the given C++ code to Go:

```go
package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func main() {
	reader := bufio.NewReader(os.Stdin)
	fmt.Print("Enter two numbers: ")

	input, err := reader.ReadString('\n')
	if err != nil {
		fmt.Println("Could not read the numbers:", err)
		return
	}

	numbers := strings.Fields(input)
	if len(numbers) != 2 {
		fmt.Println("Please enter exactly two numbers")
		return
	}

	a, err1 := strconv.Atoi(strings.TrimSpace(numbers[0]))
	b, err2 := strconv.Atoi(strings.TrimSpace(numbers[1]))

	if err1 != nil || err2 != nil {
		fmt.Println("Could not convert input to integer:", err)
		return
	}

	// test for less-than
	if a < b {
		fmt.Println(a, "is less than", b)
	}

	// test for equality
	if a == b {
		fmt.Println(a, "is equal to", b)
	}

	// test for greater-than
	if a > b {
		fmt.Println(a, "is greater than", b)
	}
}
```

This Go code does the following:

1. It reads two numbers from the user using `bufio.NewReader(os.Stdin)`.
2. It converts the input strings to integers using `strconv.Atoi()`.
3. It then checks for less-than, equality and greater-than conditions as in the original C++ code.
4. If an error occurs during reading or conversion, it prints an error message and exits.

Please note that Golang does not support multiple return values like C++, so we check errors separately for each of them (`err1` and `err2`). Also, Go uses `fmt.Println()` instead of `std::cout <<`, and does not require specifying a newline character at the end of each line.
