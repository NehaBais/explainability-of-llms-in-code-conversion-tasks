package main
import "fmt"
func main() {
 fmt.Println(
 "abcd" == "abcd", // true
 "abcd" === "abcd", // true
 "123" == 123, // true (implicit type conversion)
 "123" === 123, // false ( implicit type conversion)
 "ABCD" == "abcd", // false
 "ABCD" != "abcd", // true
 "123" != 123, // false (implicit type conversion)
 "123" !== 123, // true (implicit type conversion)
 "dcba" < "abcd", // true
 "dcba" > "abcd", // false
 strings.ToLower("ABCD") == strings.ToLower("abcd"), // true (case insensitive)
 )
}