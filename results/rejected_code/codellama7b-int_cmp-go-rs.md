package main;

import (
	"fmt";
	"log";
);

func main() {
	var n1, n2 int;
	fmt.Print("Enter the first number: ");
	if _, err := fmt.Scan(&n1); err != nil {
		log.Fatal(err)
	}
	fmt.Print("Enter the second number: ");
	if _, err := fmt.Scan(&n2); err != nil {
		log.Fatal(err)
	}
	switch {
	case n1 < n2:
		fmt.Println(n1, "is less than", n2)
	case n1 == n2:
		fmt.Println(n1, "is equal to", n2)
	case n1 > n2:
		fmt.Println(n1, "is greater than", n2)
	}
}
