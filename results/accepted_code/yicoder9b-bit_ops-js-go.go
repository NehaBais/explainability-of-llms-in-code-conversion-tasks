package main

import (
	"fmt"
	"math"
)

func bitwise(a int32, b int32) {
	// Convert a to uint32 for not operation because ~ operator works on signed integers.
	ua := uint32(a)
	alertAnd(a, b)
	alertOr(a, b)
	alertXor(a, b)
	fmt.Println("NOT a: ", ^ua)
	alertLeftShift(a, int(b))                              // convert b from int32 to int because << operator works with int not int32.
	alertRightShift(a, int(b))                             // convert b from int32 to int because >> operator works with int not int32.
	fmt.Println("a >>> b: ", uint32((int64)(ua)>>uint(b))) // logical right shift
}

func alertAnd(a int32, b int32) {
	fmt.Println("a AND b: ", a&b)
}

func alertOr(a int32, b int32) {
	fmt.Println("a OR b: ", a|b)
}

func alertXor(a int32, b int32) {
	fmt.Println("a XOR b: ", a^b)
}

// shiftAmount should be an integer not int32 because << operator works with 'int' type not 'int32'.
func alertLeftShift(num int32, shiftAmount int) {
	fmt.Println("a << b: ", num<<shiftAmount)
}

// shiftAmount should be an integer not int32 because >> operator works with 'int' type not 'int32'.
func alertRightShift(num int32, shiftAmount int) {
	fmt.Println("a >> b: ", num>>shiftAmount)
}
