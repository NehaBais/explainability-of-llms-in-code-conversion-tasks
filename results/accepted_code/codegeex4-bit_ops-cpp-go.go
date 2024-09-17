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
