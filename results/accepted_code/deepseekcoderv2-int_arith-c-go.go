package main

import "fmt"

func intQuotient(x, y float64) float64 {
	return x / y
}

func main() {
	var a, b int
	fmt.Print("Enter two integers: ")
	_, err := fmt.Scan(&a, &b)
	if err != nil || b == 0 {
		fmt.Println("Invalid input.")
	} else {
		fmt.Printf("%d + %d = %d\n", a, b, a+b)
		fmt.Printf("%d - %d = %d\n", a, b, a-b)
		fmt.Printf("%d * %d = %d\n", a, b, a*b)
		fmt.Printf("%d / %d = %.2f\n", a, b, float64(a)/float64(b))
		fmt.Printf("%%%d %% %d = %d\n", a, b, a%b)
		fmt.Printf("%d ^ %d = %f\n", a, b, math.Pow(float64(a), float64(b)))
	}
}
