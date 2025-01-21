```go
package main

import (
	"fmt"
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

		compare(a, b, SIGN_CEQ)
		compare(a, b, SIGN_CNEQ)
		compare(a, b, SIGN_CLT)
		compare(a, b, SIGN_CLE)
		compare(a, b, SIGN_CGE)
		compare(a, b, SIGN_CLE)

		a = strings.ToUpper(a)
		b = strings.ToUpper(b)

		compare(a, b, SIGN_EQ)
		compare(a, b, SIGN_NEQ)
		compare(a, b, SIGN_GT)
		compare(a, b, SIGN_LT)
		compare(a, b, SIGN_GE)
		compare(a, b, SIGN_LE)

		compare(a, b, SIGN_CEQ)
		compare(a, b, SIGN_CNEQ)
		compare(a, b, SIGN_CLT)
		compare(a, b, SIGN_CLE)
		compare(a, b, SIGN_CGE)
		compare(a, b, SIGN_CLE)

		a = strings.ToLower(a)
		b = strings.ToLower(b)

		compare(a, b, SIGN_EQ)
		compare(a, b, SIGN_NEQ)
		compare(a, b, SIGN_GT)
		compare(a, b, SIGN_LT)
		compare(a, b, SIGN_GE)
		compare(a, b, SIGN_LE)

		compare(a, b, SIGN_CEQ)
		compare(a, b, SIGN_CNEQ)
		compare(a, b, SIGN_CLT)
		compare(a, b, SIGN_CLE)
		compare(a, b, SIGN_CGE)
		compare(a, b, SIGN_CLE)

		a = strings.ToUpper(strings.ToLower(a))
		b = strings.ToLower(strings.ToLower(b))

		compare(a, b, SIGN_EQ)
		compare(a, b, SIGN_NEQ)
		compare(a, b, SIGN_GT)
		compare(a, b, SIGN_LT)
		compare(a, b, SIGN_GE)
		compare(a, b, SIGN_LE)

		compare(a, b, SIGN_CEQ)
		compare(a, b, SIGN_CNEQ)
		compare(a, b, SIGN_CLT)
		compare(a, b, SIGN_CLE)
		compare(a, b, SIGN_CGE)
		compare(a, b, SIGN_CLE)
	}
}
```
