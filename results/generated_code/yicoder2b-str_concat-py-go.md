Sure, here is the equivalent code in Golang:
```golang
package main
import ("fmt")

func main() {
	s1 := "hello"
	fmt.Println(s1 + " world") // prints hello world 

	s2 := s1 + " world"
	fmt.Println(s2) // prints hello world

	s1 = "hello"
	fmt.Printf("%s, %s, %s\n", s1, "world", "mom") // prints hello, world, mom 

	s2 = ", ".join([3]string{s1, "world", "mom"})
	fmt.Println(s2) // prints hello, world, mom 
}
```
In Golang there is no way to join multiple strings directly as in Python. However, it's possible by making an array of strings and calling the `join` function on this array. The `join` function is provided by the `fmt` package.
