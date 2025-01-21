loc := strings.Index("abab", "bb")
for loc != -1 {
	fmt.Println("The location of 'bb' is:", loc)
	loc = strings.Index("abab", "bb", loc+1)
}