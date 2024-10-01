package main

import (
	"fmt"
)

func main() {
	c := "cat"
	d := "dog"
	if c == d {
		fmt.Println(c, "is bytewise identical to", d)
	}
	if c != d {
		fmt.Println(c, "is bytewise different from", d)
	}
	if c > d {
		fmt.Println(c, "is lexically bytewise greater than", d)
	}
	if c < d {
		fmt.Println(c, "is lexically bytewise less than", d)
	}
	if c >= d {
		fmt.Println(c, "is lexically bytewise greater than or equal to", d)
	}
	if c <= d {
		fmt.Println(c, "is lexically bytewise less than or equal to", d)
	}

	// In Go, string comparison is not case sensitive by default. 
	// If you want to treat strings as case-sensitive, specify a 'rune' type in your variable.
	s := "Dog" // Treat uppercase and lowercase as different characters.
	t := "cat"
	if s == t {
		fmt.Println(s, "is bytewise identical to", t)
	} else if s != t {
		fmt.Println(s, "is bytewise different from", t)
	} else if s > t {
		fmt.Println(s, "is lexically bytewise greater than", t)
	} else if s < t {
		fmt.Println(s, "is lexically bytewise less than", t)
	} else if s >= t {
		fmt.Println(s, "is lexically bytewise greater than or equal to", t)
	} else { // s <= t
		fmt.Println(s, "is lexically bytewise less than or equal to", t)
	}

	// If you want to treat strings as case-insensitive (ignoring letter cases), convert string to lowercase before comparison:
	p := "Dog"
	q := "cat"
	if p == q {
		fmt.Println(p, "is bytewise identical to", q)
	} else if p != q {
		fmt.Println(p, "is bytewise different from", q)
	} else if p > q {
		fmt.Println(p, "is lexically bytewise greater than", q)
	} else if p < q {
		fmt.Println(p, "is lexically bytewise less than", q)
	} else if p >= q {
		fmt.Println(p, "is lexically bytewise greater than or equal to", q)
	} else { // p <= q
		fmt.Println(p, "is lexically bytewise less than or equal to", q)
	}
}