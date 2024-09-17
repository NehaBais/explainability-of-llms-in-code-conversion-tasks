package main 
import "fmt"
func main() {
    // Get two integers from the user
    var a, b int 
    fmt.Print("Enter first integer: ") 
    fmt.Scanln(&a)
    fmt.Print("Enter second integer: ") 
    fmt.Scanln(&b)
    
    // Calculate and display sum, difference, product, quotient, remainder, and exponentiation (if the operator exists) 
    sum := a + b 
    difference := a - b 
    product := a * b 
    division := float64(a) / float64(b) // Cast to float64 to avoid integer division quotient := int(float64(a)/float64(b)) // Rounds towards zero remainder := a % b fmt.Printf("Sum: %d\n", sum) 
    fmt.Printf("Difference: %d\n", difference) 
    fmt.Printf("Product: %d\n", product) 
    fmt.Printf("Quotient: %d\n", quotient) 
    fmt.Printf("Remainder: %d\n", remainder) 
    
    // Check if exponentiation exists and calculate it (if it exists)
    var exp int = 0 for i := 1; i <= a; i++ { 
        exp += b } fmt.Printf("Exponentiation: %d^%d = %d\n",a,b,exp) }