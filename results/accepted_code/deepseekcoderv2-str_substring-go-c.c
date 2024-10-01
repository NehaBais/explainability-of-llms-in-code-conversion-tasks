package main import "fmt" func binomialCoefficient(n int, k int)(int) {
  if n
    < 0 || k < 0 { return -1 }
  if k
    > n { return -2 }
  if k
    == 0 || k == n { return 1 }
  return binomialCoefficient(n - 1, k) + binomialCoefficient(n - 1, k - 1);
}
func main() {
  fmt.Println(binomialCoefficient(10, 3)) // 6