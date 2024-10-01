Here's the equivalent code in Golang:
```go
func main() {
 fmt.Println(
 "abcd" == "abcd", // true
 "abcd" == "dcba", // false
 "abcd" != "dcba", // true
 "abcd" < "dcba", // true
 "abcd" > "dcba", // false
 strings.ToLower("ABCD") == "abcd", // true (case insensitive)
 )
}
```
In Golang, the `==` operator is used for value equality comparison, while the `===` operator is used for both value and type equality comparison. The `!=` and `<>` operators are used for inequality and ordering comparisons respectively.
To compare two strings lexically, you can use the `<` and `>` operators. However, in Golang, strings are Unicode-aware, so they are compared based on their UTF-8 representations. This means that "abcd" is considered to be less than "dcba".
To perform a case insensitive comparison, you can use the `strings.EqualFold()` function from the Go standard library. This function compares two strings while ignoring the case of each character.
Golang does not provide any built-in type system for comparing strings with different types. However, you can use type assertions to compare a string with a numeric value or another string of a different type. For example:

num := "123"
if num == 123 { // will panic if num is not a number
 fmt.Println("The strings are equal")
}
str := "hello"
if str > 10 { // will panic if str is not a string
 fmt.Println("The strings are not equal")
}

