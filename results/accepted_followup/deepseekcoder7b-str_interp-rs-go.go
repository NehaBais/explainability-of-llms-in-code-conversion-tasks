package main

import (
	"fmt"
)

func main() {
	fmt.Printf("Mary had a %v lamb\n", "little") // You can specify order
	fmt.Printf("%v had a %v lamb\n", "Mary", "little")

	s := map[string]interface{}{"name": "Mary", "adj": "little"}
	fmt.Printf("%s had a %s lamb\n", s["name"], s["adj"]) // Or named arguments if you prefer
}
