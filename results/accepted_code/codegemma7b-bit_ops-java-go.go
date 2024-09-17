func bitwise(a, b int) {
  fmt.Println("a AND b:", a&b)
  fmt.Println("a OR b:", a|b)
  fmt.Println("a XOR b:", a^b)
  fmt.Println("NOT a:", ^a)
  fmt.Println("a << b:", a<<b) // left shift
  fmt.Println("a >> b:", a>>b) // arithmetic right shift
  fmt.Println("a >>> b:", a>>>b) // logical right shift
  fmt.Println("a ROL b:", bits.RotateLeft(uint(a), b)) // rotate left
  fmt.Println("a ROR b:", bits.RotateRight(uint(a), b)) // rotate right
}