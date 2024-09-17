package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func main() {
	reader := bufio.NewReader(os.Stdin)

	nbr1, err1 := strconv.Atoi(readLine(reader))
	if err1 != nil {
		fmt.Println("Invalid input for nbr1")
		return
	}

	nbr2, err2 := strconv.Atoi(readLine(reader))
	if err2 != nil {
		fmt.Println("Invalid input for nbr2")
		return
	}

	switch {
	case nbr1 < nbr2:
		fmt.Printf("%d is less than %d\n", nbr1, nbr2)
	case nbr1 > nbr2:
		fmt.Printf("%d is greater than %d\n", nbr1, nbr2)
	default:
		fmt.Printf("%d is equal to %d\n", nbr1, nbr2)
	}
}

func readLine(r *bufio.Reader) string {
	line, _, err := r.ReadLine()
	if err != nil {
		return ""
	}
	return string(line)
}
