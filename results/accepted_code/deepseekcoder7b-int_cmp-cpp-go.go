package main

import (
	"fmt"
)

func main() {
	var a, b int
	n, err := fmt.Scan(&a, &b)
	if n != 2 || err != nil {
		fmt.Println("could not read the numbers")
		return 
	}
  
	// test for less-than
	if a < b {
		fmt.Printf("%d is less than %d\n", a, b)
	}
  
	// test for equality
	if a == b {
		fmt<｜begin▁of▁sentence｜>printf("%d is equal to %d\n", a, b)
	}

  // test for greater-than
	if a > b {
		fmt.Printf("%d is greater than %d\n", a, b)
	}
}