s1 := "hello"
fmt.Println(s1 + " world")

s2 := s1 + " world"
fmt.Println(s2)

s1 = "hello"
fmt.Println(strings.Join([]string{s1, "world", "mom"}, ", "))

s2 = strings.Join([]string{s1, "world", "mom"}, ", ")
fmt.Println(s2)