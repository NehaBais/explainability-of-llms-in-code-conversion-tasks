Sure! Here's the equivalent Golang code for computing factors of a positive integer:
```
package main
import (
 "fmt"
)
func factors(num int) []int {
 var nFactors []int
 for i := 1; i <= int(math.Sqrt(float64(num))); i++ {
 if num%i == 0 {
 nFactors = append(nFactors, i)
 if i != num/i {
 nFactors = append(nFactors, num/i)
 }
 }
 }
 sort.Ints(nFactors)
 return nFactors
}
func main() {
 fmt.Println(factors(45)) // [1 3 5 9 15 45]
 fmt.Println(factors(53)) // [1 53]
 fmt.Println(factors(64)) // [1 2 4 8 16 32 64]
}
```
The `factors` function takes an integer as input and returns a slice of integers representing the factors of that number. It iterates through all numbers up to the square root of the input number, checking if each one divides the input evenly. If it does, it adds both the divisor and its quotient (if they are different) to the `nFactors` slice. Finally, it sorts the `nFactors` slice in ascending order and returns it.
The `main` function calls the `factors` function with the three test cases you provided and prints the results.

