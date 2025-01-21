package main

// import "strings" // Removed unnecessary import statement

func sconcat(s1 string, s2 string) string {
	return s1 + s2
}

func main() {
	s := "hello"

	// Print the original variable
	fmt.Println(s)

	// Or print with another string literal
	fmt.Printf("%s%s\n", s, " literal")

	// Concatenate and save in another variable
	s2 := sconcat(s, " literal")

	// Print the result
	fmt.Println(s2)
}
