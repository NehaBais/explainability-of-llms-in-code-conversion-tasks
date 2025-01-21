package main

import (
	"fmt"
	"math/bits"
)

func main() {
	a := 5
	b := 3
	fmt.Printf("a and b: %dn", a&b)
	fmt.Printf("a or b: %dn", a|b)
	fmt.Printf("a xor b: %dn", a^b)
	fmt.Printf("not a: %dn", ^a)
	fmt.Printf("a shl b: %dn", a<<b)
	fmt.Printf("a shr b: %dn", a>>b)
	fmt.Printf("a lsr b: %dn", bits.LeadingZeros32(uint32(a))-bits.LeadingZeros32(uint32(b)))
	fmt.Printf("a rol b: %dn", bits.RotateLeft32(uint32(a), b))
	fmt.Printf("a ror b: %dn", bits.RotateRight32(uint32(a), b))
}
