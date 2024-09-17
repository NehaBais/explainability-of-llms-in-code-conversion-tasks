func bitwise(a, b int) {
  fmt.Println("a AND b:", a&b)
  fmt.Println("a OR b:", a|b)
  fmt.Println("a XOR b:", a^b)
  fmt.Println("NOT a:", ^a)
  fmt.Println("a << b:", a<<b) // left shift
  fmt.Println("a >> b:", a>>b) // arithmetic right shift
  fmt.Println("a >>> b:", a>>uint(b)) // logical right shift
}