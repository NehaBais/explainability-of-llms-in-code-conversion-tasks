package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func main() {
	reader := bufio.NewReader(os.Stdin)

	fmt.Println("Enter the first integer:")
	nbr1Str, _ := reader.ReadString('\n')
	nbr1, _ := strconv.Atoi(strings.TrimSpace(nbr1Str))

	fmt.Println("Enter the second integer:")
	nbr2Str, _ := reader.ReadString('\n')
	nbr2, _ := strconv.Atoi(strings.TrimSpace(nbr2Str))

	if nbr1 < nbr2 {
		fmt.Println(nbr1, "is less than", nbr2)
	} else if nbr1 == nbr2 {
		fmt.Println(nbr1, "is equal to", nbr2)
	} else {
		fmt.Println(nbr1, "is greater than", nbr2)
	}
}
