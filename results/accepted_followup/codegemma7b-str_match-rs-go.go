package main

func printMatch(possibleMatch *string) {
	if possibleMatch != nil {
		fmt.Printf("Found match at pos %d\n", *possibleMatch)
	} else {
		fmt.Println("Did not find any matches")
	}
}

func main() {
	// ... code as in the original example ...
}
