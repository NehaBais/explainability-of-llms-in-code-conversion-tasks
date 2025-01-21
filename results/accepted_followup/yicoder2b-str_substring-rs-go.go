func main() {
	s := "abc文字化けdef"
	n := 2
	m := 3
	println(string([]rune{runet(s[n:n+m]...)})) // prints: c文字化け
	println(string([]rune{runet(s[n:]...)}))     // prints: 文字化けdef
	println(string([]rune{runet(s[:n] + s[n+1:]...)})) // prints: abc
	cpos := findRuneInString(s, 'b')
	if cpos == -1 {
		println("No character 'b' found in string")
	} else {
		println(string([]rune{runet(s[cpos:cpos+m]...)})) // prints: b
	}
	spos := findRuneInString(s, []rune{'け', 'd'})
	if spos == -1 {
		println("No substring 'けd' found in string")
	} else {
		println(string([]rune{runet(s[spos:span]...)})) // prints: けd
	}
}