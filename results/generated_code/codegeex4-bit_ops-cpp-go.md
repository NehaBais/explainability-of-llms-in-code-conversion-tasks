Below is the Go equivalent of your C++ code:

```go
package main

import (
	"fmt"
	"math/bits"
)

func bitwise(a int, b uint) {
	fmt.Println("a and b:", a&int(b))
	fmt.Println("a or b: ", a|int(b))
	fmt.Println("a xor b:", a^int(b))
	fmt.Println("not a:  ", ^a)
	
	fmt.Println("a shl b:", a<<b)
	fmt.Println("a shr b:", a>>b)
	
	var ua uint = uint(a)
	fmt.Println("ua lsr b:", ua>>b)

	fmt.Println("ua rol b:", bits.RotateLeft32(int(ua), int(b)))
	fmt.Println("ua ror b:", bits.RotateLeft32(int(ua), 32-int(b)))
}

func main() {
	bitwise(10, 2) // Replace with your numbers
}
```

Please notice:
1. Go does not support `unsigned` integer data types natively, therefore all bitwise operations on integers default to signed integers.
2. Go's right shift operator (`>>`) performs arithmetic shifts (which fill in the leftmost bit), like C++.
3. The Go language also doesn't have a built-in rotate function so we use `math/bits` package for it.
4. The amount of rotation must be less than 32, as there are only 32 bits in an integer.
5. Since Go treats all numbers as signed integers by default when you do bitwise operations with negative numbers, the result might be different from C++. 
6. Please replace `bitwise(10, 2)` call with your input numbers.
