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