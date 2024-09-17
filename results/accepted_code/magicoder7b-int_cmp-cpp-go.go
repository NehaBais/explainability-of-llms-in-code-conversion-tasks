package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	reader := bufio.NewReader(os.Stdin)

	a, b, err := readNumbers(reader)
	if err != nil {
		fmt.Println("could not read the numbers")
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
}

func readNumbers(reader *bufio.Reader) (int, int, error) {
	var err error
	a, err := reader.ReadInt()
	if err != nil {
		return 0, 0, err
	}

	_, err = reader.ReadByte() // Consume newline character
	if err != nil {
		return 0, 0, err
	}

	b, err := reader.ReadInt()
	if err != nil {
		return 0, 0, err
	}

	_, err = reader.ReadByte() // Consume newline character
	if err != nil {
		return 0, 0, err
	}
	return a, b, nil
}
