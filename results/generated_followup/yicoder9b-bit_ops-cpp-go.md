The error occurred because Go does not have built-in bitwise rotation operators like C++, so we need to use functions from 'math/bits' package for such operations. The RotL32 and RotR32 functions do the left and right rotations respectively on a 32 bit integer. However these functions are only available in Go versions >=1.8.

To correct the code you need to convert your int (a) to uint32 before applying rotation operators, as they work for unsigned integers.
Here is the corrected version of your code:
```go
package main

import (
	"fmt"
	"math/bits"
)

func bitwise(a int, b int) {
	fmt.Println("a and b:", a&b)
	fmt.Println("a or b: ", a|b)
	fmt.Println("a xor b:", a^b)
	fmt.Println("not a:  ", ^a)
	fmt.Println("a shl b:", a<<b)
	fmt.Println("a shr b:", a>>b) // Note: arithmetic right shift
	ua := uint32(a)
	fmt.Println("a lsr b:", ua>>b) // logical right shift (guaranteed)
	// rotation is not built-in in Go but can be easily implemented with bit manipulation functions from 'math/bits' package
	fmt.Println("a rol b:", bits.RotL32(ua, int32(b)))
	fmt.Println("a ror b:", bits.RotR32(ua, int32(b)))
}
```
