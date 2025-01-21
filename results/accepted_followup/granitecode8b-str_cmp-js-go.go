func main() {
 fmt.Println(
 "abcd" == "abcd", // true
 "abcd" != "dcba", // true
 "abcd" < "dcba", // true
 strings.ToLower("ABCD") == "abcd".ToLower(), // true (case insensitive)
 )
}