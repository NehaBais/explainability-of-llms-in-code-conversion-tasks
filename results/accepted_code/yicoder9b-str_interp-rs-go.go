package main

import (
	fmt "fmt"
)

func main() {
	fmt.Printf("Mary had a %s lamb\n", "little")
	//You can specify order
	fmt.Printf("%s had a %s lamb\n", "little", "Mary")
	//Or named arguments if you prefer - Golang does not have this feature built-in like Rust.
}
