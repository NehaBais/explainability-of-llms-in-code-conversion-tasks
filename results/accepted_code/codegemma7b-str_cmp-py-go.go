func compare(a, b string) {
	fmt.Printf("\n%q is of type %T and %q is of type %T\n", a, a, b, b)
	if a < b {
		fmt.Printf("%q is strictly less than  %q\n", a, b)
	}
	if a <= b {
		fmt.Printf("%q is less than or equal to %q\n", a, b)
	}
	if a > b {
		fmt.Printf("%q is strictly greater than  %q\n", a, b)
	}
	if a >= b {
		fmt.Printf("%q is greater than or equal to %q\n", a, b)
	}
	if a == b {
		fmt.Printf("%q is equal to %q\n", a, b)
	}
	if a != b {
		fmt.Printf("%q is not equal to %q\n", a, b)
	}
	if a == b {
		fmt.Printf("%q has object identity with %q\n", a, b)
	}
	if a != b {
		fmt.Printf("%q has negated object identity with %q\n", a, b)
	}
}

compare("YUP", "YUP")
compare("BALL", "BELL")
compare("24", "123")
compare(24, 123)
compare(5.0, 5)