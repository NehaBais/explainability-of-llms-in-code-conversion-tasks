package main;

import "fmt";

func main() {
	var a, b int32;
	_, err := fmt.Scan(&a, &b);
	if err != nil {
		panic(err);
	}

	// truncates towards 0
	quotient := int32(a/b);
	remainder := a%b;
	var remainderSign int32 = 1;
	if b < 0 {
		remainderSign = -1;
	}

	fmt.Printf("%d + %d = %d\n", a, b, a+b);
	fmt.Printf("%d - %d = %d\n", a, b, a-b);
	fmt.Printf("%d * %d = %d\n", a, b, a*b);
	fmt.Printf("%d / %d = %d (truncates towards 0)\n", a, b, quotient);
	fmt.Printf("%d %% %d = %d (same sign as first operand)", a, b, remainderSign*remainder);
}

