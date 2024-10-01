In Go language, the bitwise operations are performed using similar operators as JavaScript. However, in Go there is no operator for logical right shift, instead we can use an inbuilt function from "math" package to perform this operation.
Also note that in Go `~` (bitwise not) on a number results in the two's complement of the number. If you want to get a result similar to JavaScript bitwise not, you could convert the result to uint32 and then convert it back to int32. Here is how the conversion would look like:

```go
package main

import (
	"fmt"
	"math"
)

func bitwise(a int32, b int32){
    // Convert a to uint32 for not operation because ~ operator works on signed integers.
    ua := uint32(a) 
    alertAnd(a, b)
    alertOr(a, b)
    alertXor(a, b)
    fmt.Println("NOT a: ", ^ua)
    alertLeftShift(a, int(b)) // convert b from int32 to int because << operator works with int not int32.
    alertRightShift(a, int(b)) // convert b from int32 to int because >> operator works with int not int32. 
	fmt.Println("a >>> b: ", uint32((int64)(ua)>>uint(b)))  // logical right shift
}

func alertAnd(a int32, b int32){
    fmt.Println("a AND b: ", a & b)
}

func alertOr(a int32, b int32){
    fmt.Println("a OR b: ", a | b)
}

func alertXor(a int32, b int32){
	 fmt.Println("a XOR b: ", a ^ b)
}

// shiftAmount should be an integer not int32 because << operator works with 'int' type not 'int32'.
func alertLeftShift(num int32, shiftAmount int){ 
    fmt.Println("a << b: ", num << shiftAmount) 
}   

// shiftAmount should be an integer not int32 because >> operator works with 'int' type not 'int32'.
func alertRightShift(num int32, shiftAmount int){  
    fmt.Println("a >> b: ", num >> shiftAmount) 
}   
```

Please note that Go does not support bitwise rotation operations natively so you would need to implement these yourself or use a third-party library if available.
