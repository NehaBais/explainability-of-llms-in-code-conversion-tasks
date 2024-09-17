func bitwise(a, b int) {
  fmt.Println("a and b:", a&b)
  fmt.Println("a or b:", a|b)
  fmt.Println("a xor b:", a^b)
  fmt.Println("not a:", ^a)
  fmt.Println("a << n:", a<<b) // left shift
  fmt.Println("a >> n:", a>>b) // on most platforms: arithmetic right shift
  // convert the signed integer into unsigned, so it will perform logical shift
  c := uint(a)
  fmt.Println("c >> b:", c>>b) // logical right shift
  // there are no rotation operators in Golang
}