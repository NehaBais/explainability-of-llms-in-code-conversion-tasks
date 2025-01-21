func bitwise(a int, b int) {
	AND := a & b    // Bitwise AND
	OR := a | b     // Bitwise OR
	XOR := a ^ b    // Bitwise XOR
	NOT_A := ~a     // Bitwise NOT (NOT A)
	SHL_B := a << b // Left shift
	SHR_B := a >> b // Right shift
	fmt.Printf("%d AND %d: %d\n", a, b, AND)
	fmt.Printf("%d OR %d:  %d\n", a, b, OR)
	fmt.Printf("%d XOR %d: %d\n", a, b, XOR)
	fmt.Printf("%d NOT A: %d\n", a, ~a) // Bitwise NOT (NOT A)
	fmt.Printf("%d SHL %d: %d\n", a, b, SHL_B)
	fmt.Printf("%d SHR %d: %d\n", a, b, SHR_B)
}