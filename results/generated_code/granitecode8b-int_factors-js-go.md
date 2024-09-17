Here's the equivalent code in Golang:
```
func factors(num int) []int {
 var (
 n_factors = []int{}
 i int
 )
 for i = 1; i <= int(math.Sqrt(float64(num))); i += 1 {
 if num%i == 0 {
 n_factors = append(n_factors, i)
 if num/i != i {
 n_factors = append(n_factors, num/i)
 }
 }
 }
 sort.Ints(n_factors)
 return n_factors
}
fmt.Println(factors(45)) // [1 3 5 9 15 45]
fmt.Println(factors(53)) // [1 53]
fmt.Println(factors(64)) // [1 2 4 8 16 32 64]
```
The Golang code uses a for loop to iterate over all possible factors of the input number `num`. The `sqrt` function from the `math` package is used to calculate the square root of `num`, and the loop iterates up to that value. For each factor, we check if it divides `num` evenly using the modulo operator `%`. If it does, we add it to the `n_factors` slice.
After the loop, we sort the `n_factors` slice in ascending order using the `sort.Ints` function from the `sort` package. Finally, we return the sorted list of factors.

