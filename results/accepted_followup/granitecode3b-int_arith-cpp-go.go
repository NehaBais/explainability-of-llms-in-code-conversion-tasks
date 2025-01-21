package main

import (
	"fmt"
	"os"
)

func main() {
	var a, b int
	fmt.Println("Enter two integers:")
	_, err := fmt.Fscanf(os.Stdin, "%d %d", &a, &b)
	if err != nil {
		panic(err)
	}
	c := a + b
	d := a - b
	e := a * b
	f := a / b
	g := a % b
	h := int(float64(a) / float64(b))
	i := a ^ b
	fmt.Println("a+b =", c)
	fmt.Println("a-b =", d)
	fmt.Println("a*b =", e)
	fmt.Println("a/b =", f, ", remainder", g)
	fmt.Println("a^b =", i)
	fmt.Println("h =", h)
}
