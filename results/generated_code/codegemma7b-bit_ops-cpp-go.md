```go
func bitwise(a, b int) {
	fmt.Println("a and b:", a&b)  // bitwise AND
	fmt.Println("a or b:", a|b)   // bitwise OR
	fmt.Println("a xor b:", a^b)   // bitwise XOR
	fmt.Println("not a:", ^a)      // bitwise NOT
	fmt.Println("a shl b:", a<<b)  // left shift
	fmt.Println("a shr b:", a>>b)  // right shift (arithmetic)
	ua := uint(a)
	fmt.Println("a lsr b:", ua>>b) // right shift (logical)
	fmt.Println("a rol b:", bits.RotateLeft(ua, b))  // left rotate
	fmt.Println("a ror b:", bits.RotateRight(ua, b)) // right rotate
}
```
