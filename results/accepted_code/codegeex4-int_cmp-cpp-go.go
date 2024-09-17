package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func main() {
	scanner := bufio.NewScanner(os.Stdin)

	fmt.Print("Enter the first integer: ")
	if scanner.Scan() {
		a, err := strconv.Atoi(strings.TrimSpace(scanner.Text()))
		if err != nil {
			fmt.Println("Error reading first number.")
			return
		}

		fmt.Print("Enter the second integer: ")
		if scanner.Scan() {
			b, err := strconv.Atoi(strings.TrimSpace(scanner.Text()))
			if err != nil {
				fmt.Println("Error reading second number.")
				return
			}

			// test for less-than
			if a < b {
				fmt.Printf("%d is less than %d\n", a, b)
			}

			// test for equality
			if a == b {
				fmt.Printf("%d is equal to %d\n", a, b)
			}

			// test for greater-than
			if a > b {
				fmt.Printf("%d is greater than %d\n", a, b)
			}
		} else if scanner.Err() != nil {
			fmt.Println("Error reading input.")
		}
	} else if scanner.Err() != nil {
		fmt.Println("Error reading input.")
	}
}
