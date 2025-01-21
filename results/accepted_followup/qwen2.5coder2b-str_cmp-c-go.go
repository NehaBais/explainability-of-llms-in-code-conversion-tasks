package main

import (
	"fmt"
	"strconv"
)

const (
	SIGN_EQ = iota
	SIGN_NEQ
	SIGN_GT
	SIGN_LT
	SIGN_GE
	SIGN_LE

	SIGN_CEQ = iota
	SIGN_CNEQ
	SIGN_CLT
	SIGN_CLE
	SIGN_CGE
	SIGN_CLE
)

func sign(s, t string) int {
	if s == t {
		return SIGN_EQ
	} else if s != t {
		return SIGN_NEQ
	}

	return 0
}

func compare(s, t string, signType int) {
	fmt.Printf("%s%2d%2d%2d%2d%2d%2d %s\n",
		s,
		sign(sign, t),
		sign(t, s),
		sign(s, t),
		sign(t, s),
		sign(s, t),
		sign(t, s),
		t
	)
}

func main() {
	fmt.Println("	eq , ne , gt , lt , ge , le")

	var a, b string

	for len(os.Args) > 2 {
		a = os.Args[1]
		b = os.Args[2]

		compare(a, b, SIGN_EQ)
		compare(a, b, SIGN_NEQ)
		compare(a, b, SIGN_GT)
		compare(a, b, SIGN_LT)
		compare(a, b, SIGN_GE)
		compare(a, b, SIGN_LE)

		// Comparing numeric strings
		v1, err := strconv.ParseFloat(a, 64)
		if err != nil {
			fmt.Println("Error parsing", a)
			continue
		}
		v2, err := strconv.ParseFloat(b, 64)
		if err != nil {
			fmt.Println("Error parsing", b)
			continue
		}

		if v1 == v2 {
			compare(a, b, SIGN_EQ)
		} else if v1 > v2 {
			compare(a, b, SIGN_GT)
		} else {
			compare(a, b, SIGN_LT)
		}
	}

	a = strings.ToUpper(os.Args[1])
	b = strings.ToUpper(os.Args[2])

	compare(a, b, SIGN_EQ)
	compare(a, b, SIGN_NEQ)
	compare(a, b, SIGN_GT)
	compare(a, b, SIGN_LT)
	compare(a, b, SIGN_GE)
	compare(a, b, SIGN_LE)
}