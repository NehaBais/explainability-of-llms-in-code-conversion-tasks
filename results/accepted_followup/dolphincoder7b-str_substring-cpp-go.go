fmt.Println(s[n:]) // Substring from n to end
fmt.Println(s[:len(s)-1]) // Whole string minus last character
fmt.Println(s[n:int(c)]) // Substring starting from a known character within the string and of m length
fmt.Println(s[n  : int(c)+m]) // Substring starting from a known substring within the string and of m length