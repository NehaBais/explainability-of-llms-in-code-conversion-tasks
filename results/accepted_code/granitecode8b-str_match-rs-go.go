func printMatch(possibleMatch int) {
 if possibleMatch != -1 {
 fmt.Printf("Found match at pos %dn", possibleMatch)
 } else {
 fmt.Println("Did not find any matches")
 }
}
func main() {
 s1 := "abcd"
 s2 := "abab"
 s3 := "ab"
 // Determining if the first string starts with second string
 if strings.HasPrefix(s1, s3) {
 fmt.Println("String 1 starts with string 3")
 }
 // Determining if the first string contains the second string at any location
 if strings.Contains(s1, s3) {
 fmt.Println("String 1 contains string 3")
 // Print the location of the match
 matchPos := strings.Index(s1, s3)
 printMatch(matchPos) // Found match at pos 0
 }
 // Determining if the first string ends with the second string
 if strings.HasSuffix(s2, s3) {
 fmt.Println("String 2 ends with string 3")
 }
}