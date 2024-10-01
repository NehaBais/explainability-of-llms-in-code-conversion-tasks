package main

import "fmt"

func main() {
	str := []byte("12345678")
	str = append(str, '9', '!')
	fmt.Println(string(str))
}
