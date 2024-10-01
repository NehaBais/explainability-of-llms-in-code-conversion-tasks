```go
func printMatch(possibleMatch *string) {
    if possibleMatch != nil {
        fmt.Printf("Found match at pos %d\n", *possibleMatch)
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
        fmt.Println("s1 starts with s3")
    }

    // Determining if the first string contains the second string at any location
    if strings.Contains(s1, s3) {
        fmt.Println("s1 contains s3")
    }

    // Print the location of the match
    printMatch(strings.Index(s1, s3)) // Found match at pos 0
    printMatch(strings.Index(s1, s2)) // Did not find any matches

    // Determining if the first string ends with the second string
    if strings.HasSuffix(s2, s3) {
        fmt.Println("s2 ends with s3")
    }
}
```
