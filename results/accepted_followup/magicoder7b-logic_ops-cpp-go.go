package main

import (
	"fmt"
	"logical" // For logical operations
)

func printLogic(a bool, b bool) {
	fmt.Printf("A and B is %v\n", logical.And(a, b))
	fmt.Printf("A or B is %v\n", logical.Or(a, b))
	fmt.Printf("Not A is %v\n", !a)
}
