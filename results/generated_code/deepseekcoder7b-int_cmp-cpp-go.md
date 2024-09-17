Here's the equivalent Go code. It uses `fmt.Scan` for reading from standard input and then checks each condition with separate if statements as in your original C++ code.

```go
package main

import (
	"fmt"
)

func main() {
	var a, b int
	n, err := fmt.Scan(&a, &b)
	if n != 2 || err != nil {
		fmt.Println("could not read the numbers")
		return 
	}
  
	// test for less-than
	if a < b {
		fmt.Printf("%d is less than %d\n", a, b)
	}
  
	// test for equality
	if a == b {
		fmt<｜begin▁of▁sentence｜>printf("%d is equal to %d\n", a, b)
	}

  // test for greater-than
	if a > b {
		fmt.Printf("%d is greater than %d\n", a, b)
	}
}
```
Please note that Go doesn't provide the same flexibility to read from standard input like C++ does with `std::cin >>`. In this case, we have used `fmt.Scan` which reads space-separated values from standard input into provided variables. Therefore it will work correctly if you enter two integers when running this program.

