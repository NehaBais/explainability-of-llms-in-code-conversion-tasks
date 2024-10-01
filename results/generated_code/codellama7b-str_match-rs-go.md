Sure, I can help you with that! Here's the conversion of the code from Rust to Golang:
```
package main

import "fmt"

func printMatch(possibleMatch *int) {
	if possibleMatch == nil {
		fmt.Println("Did not find any matches")
	} else {
		fmt.Printf("Found match at pos %d\n", *possibleMatch)
	}
}

func main() {
	s1 := "abcd"
	s2 := "abab"
	s3 := "ab"

	// Determining if the first string starts with second string
	fmt.Println(strings.HasPrefix(s1, s3)) // true

	// Determining if the first string contains the second string at any location
	fmt.Println(strings.Contains(s1, s3)) // true

	// Print the location of the match
	printMatch(strings.Index(s1, s3)) // Found match at pos 0
	printMatch(strings.Index(s1, s2)) // Did not find any matches

	// Determining if the first string ends with the second string
	fmt.Println(strings.HasSuffix(s2, s3)) // true
}
```
Here's a brief explanation of each part:

1. The `fmt` package is imported for printing output.
2. The `printMatch` function takes in an integer pointer and prints "Found match at pos X" or "Did not find any matches", depending on whether the pointer is nil or not.
3. In the main function, we define three strings: `s1`, `s2`, and `s3`. We then use the `strings` package to perform the following operations:
	* Check if `s1` starts with `s3`: This will print "true" if the first string starts with the second string.
	* Check if `s1` contains `s3`: This will print "true" if the first string contains the second string at any location.
	* Print the location of the match for `s3`: This will print the index where the match is found, or "Did not find any matches" if no match is found.
	* Check if `s2` ends with `s3`: This will print "true" if the second string ends with the third string.

Note that in Golang, we use the `strings` package to perform string operations like checking for prefixes, suffixes, and contains. Additionally, we use the `fmt` package to print output.
