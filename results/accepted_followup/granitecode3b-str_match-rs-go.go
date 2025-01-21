func printMatch(possibleMatch *int) {
 switch {
 case possibleMatch != nil:
 fmt.Printf("Found match at pos %d\n", *possibleMatch)
 default:
 fmt.Println("Did not find any matches")
 }
}
 func main() {
 s1 := "abcd"
 s2 := "abab"
 s3 := "ab"

 // Determining if the first string starts with second string
 fmt.Printf("%t\n", strings.HasPrefix(s1, s3))
 // Determining if the first string contains the second string at any location
 fmt.Printf("%t\n", strings.Contains(s1, s3))
 // Print the location of the match
 printMatch(&strings.Index(s1, s3)[0]) // Found match at pos 0
 printMatch(&strings.Index(s1, s2)[0]) // Did not find any matches
 // Determining if the first string ends with the second string
 fmt.Printf("%t\n", strings.HasSuffix(s2, s3))
}