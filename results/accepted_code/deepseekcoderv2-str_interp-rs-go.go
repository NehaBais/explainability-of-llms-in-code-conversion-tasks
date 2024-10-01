package main

import (
	"fmt"
)

func main() {
	// You can specify order
	fmt.Printf("Mary had a %s lamb\n", "little")

	// Or named arguments if you prefer
	fmt.Printf("%[2]s had a %[1]s lamb\n", "little", "Mary")
}
