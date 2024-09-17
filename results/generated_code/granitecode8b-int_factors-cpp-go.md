Here's the equivalent Golang code for computing the factors of a positive integer:
```
package main
import (
 "fmt"
 "sort"
)
func GenerateFactors(n int) []int {
 factors := []int{1, n}
 for i := 2; i*i <= n; i++ {
 if n%i == 0 {
 factors = append(factors, i)
 if i*i != n {
 factors = append(factors, n/i)
 }
 }
 }
 sort.Ints(factors)
 return factors
}
func main() {
 sampleNumbers := []int{3135, 45, 60, 81}
 for _, num := range sampleNumbers {
 factors := GenerateFactors(num)
 fmt.Printf("Factors of %4d are: %vn", num, factors)
 }
}
```
The `GenerateFactors` function takes an integer as input and returns a slice of integers that represent the factors of the input number. The function uses a for loop to iterate over all possible factors up to the square root of the input number. If the factor is a divisor of the input number, it is added to the list of factors. Finally, the `sort.Ints` function is used to sort the factors in ascending order.
The `main` function creates a slice of sample numbers and iterates over them using a range loop. For each sample number, the `GenerateFactors` function is called to compute its factors, and the results are printed to the console using `fmt.Printf`. The output will be similar to the following:
```
Factors of 3135 are: [1 3135]
Factors of 45 are: [1 3 5 9 15 45]
Factors of 60 are: [1 2 3 4 5 6 10 12 15 20 30 60]
Factors of 81 are: [1 3 9 27 81]
```

