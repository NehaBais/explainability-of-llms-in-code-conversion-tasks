package main

// import "strings" // removed as it is not used

func main() {
	str := "Good Morning"
	cstr := []string{" to all", "!!!"}

	newStr := strings.Join(cstr, "")
	fmt.Println(newStr)
}
