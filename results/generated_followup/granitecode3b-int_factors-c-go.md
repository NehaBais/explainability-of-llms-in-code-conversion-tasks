The error occurred because the `main()` function was not declared as a top-level function in Golang. The `main()` function must be defined at the beginning of the file, before any other functions are declared. To fix this error, simply add the `func` keyword before the `main()` function declaration and place it on a separate line.

The corrected code is below:
```go
package main
import (
 "fmt"
 "sort"
)
type Factors struct {
 list []int
}
func factor(num int, f *Factors) *Factors {
 f.list = append(f.list, num)
 if len(f.list) > cap(f.list)/2 {
  f.list = make([]int, 0, len(f.list)*2)
 }
 for i := 0; i < len(f.list); i++ {
  dvsr := f.list[i]
  if num%dvsr == 0 {
   f.list = append(f.list, num/dvsr)
  }
 }
 sort.Ints(f.list)
 return f
}
func main() {
 nums2factor := []int{2059, 223092870, 3135, 45}
 ftors := Factors{}
 for _, num := range nums2factor {
  factor(num, &ftors)
  fmt.Printf("factors of %d are:n", num)
  fmt.Println(ftors.list)
 }
}
```
This code defines the `main()` function as a top-level function and creates an instance of the `Factors` struct `ftors`. It then iterates over each number in the `nums2factor` slice, calls the `factor()` function to compute its factors, and prints the resulting list. The corrected code should compile without errors now.

