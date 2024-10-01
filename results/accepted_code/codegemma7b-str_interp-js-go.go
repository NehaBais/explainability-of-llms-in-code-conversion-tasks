original := "Mary had a X lamb"
little := "little"
replaced := strings.Replace(original, "X", little, -1) // -1 means replace all occurrences
fmt.Println(replaced) // Output: Mary had a little lamb