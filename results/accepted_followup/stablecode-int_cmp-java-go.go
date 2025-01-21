package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func main() {
	reader := bufio.NewReader(os.Stdin))

	nbr1, _ := strconv.Atoi(reader.ReadString('\n'))[:len(reader.ReadString('\n')))-1])
	nbr2, _ := strconv.Atoi(reader.ReadString('\n'))[:len(reader.ReadString('\n')))-1])

	if nbr1 < nbr2 {
		fmt.Println(nbr1, "is less than", nbr2))
	} else if nbr1 > nbr2 {
		fmt.Println(nbr1, "is greater than", nbr2))
	} else {
		fmt.Println(nbr1, "is equal to", nbr2))
	}
}