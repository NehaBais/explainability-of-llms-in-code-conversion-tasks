package main

import "fmt"

func main() {
	fmt.Println("Mary had a %s lamb", "little")
	// You can specify order
	fmt.Printf("%1$s had a %2$s lamb", "Mary", "little")
	// Or named arguments if you prefer
	fmt.Printf("%[1]s had a %[2]s lamb", map[string]interface{}{"name": "Mary", "adj": "little"})
}
