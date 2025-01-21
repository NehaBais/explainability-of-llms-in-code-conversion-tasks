import  (
	 "fmt"
)

func main() {
	var a int
	var b int

	fmt.Scanf("%d %d", &a, &b) // Add an extra argument to match the number of expected items (2 for a and b)

	var sum = a + b
	var difference = a - b
	var product = a * b
	var quotient = a / b
	var remainder = a % b

	fmt.Printf("a+b  = %d\n", sum)
	fmt.Printf("a-b  = %d\n", difference)
	fmt.Printf("a*b  = %d\n", product)
	fmt.Printf("a/b  = %d, remainder  %d\n", quotient, remainder)

	return 0
}