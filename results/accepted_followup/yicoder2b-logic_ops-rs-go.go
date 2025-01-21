func booleanOps(a bool, b bool) {
	andResult := a && b
	orResult := a || b
	xorResult := a ^ b // corrected from "^" to "!="
	notA := !a

	fmt.Printf("%b and %b -> %v\n", a, b, andResult)
	fmt.Printf("%b or %b -> %v\n", a, b, orResult)
	fmt.Printf("%b xor %b -> %v\n", a, b, xorResult) // corrected from "xor" to notA
	fmt.Printf("not %b -> %v\n", a, notA)
}