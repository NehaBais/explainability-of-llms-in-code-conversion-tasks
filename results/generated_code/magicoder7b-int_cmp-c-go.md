 Below is the Golang version of your C code:

```Go
package main

import (
	"fmt"
	"os"
)

func main() {
	_, err := fmt.Scan(&a, &b)
	if err != nil {
	    os.Exit(1)
	}

	if a < b {
		fmt.Printf("%d is less than %d\n", a, b)
	}

	if a == b {
		fmt.Printf("%d is equal to %d\n", a, b)
	}

	if a > b {
		fmt.Printf("%d is greater than %d\n", a, b)
	}
}
```

Here, we're using the `fmt.Scan()` function to get inputs from the user. The values are stored in the variables 'a' and 'b'. If there's an error reading these values (which would happen if you entered something that wasn't a number), then the program will exit with status 1, indicating a failure.
Afterwards, we use `fmt.Printf()` to print out the messages based on the conditions given in your C code.
