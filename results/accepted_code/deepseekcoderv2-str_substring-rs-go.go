package main

import "unicode/utf8"

func main() {
	s := []rune{'a', 'b', 'c', '文', '字', '化', 'け', 'd', 'e', 'f'}
	n, m := 2, 3
	cpos := utf8.RuneCountInString(string(s))
	fmt.Println("3文字目から出力")
	fmt.Printf("%s\n", string(s[cpos+n:]))
	fmt.Println("3文字目までの出力")
	fmt.Printf("%s\n", string(s[cpos+n:]))
	fmt.Println("最後以外の出力")
	fmt.Printf("%s\n", string(s[:len(s)-1]))
	fmt.Println("bを探してそこから3文字目まで")
	spos := bytes.IndexRune(s, 'b')
	fmt.Printf("%s\n", string(s[spos+n:cpos]))
	fmt.Println("けdが出てくる最初のところから3文字目まで")
	spos = bytes.IndexRune(s, 'け')
	cpos = bytes.IndexRune(s, 'd')
	fmt.Printf("%s\n", string(s[cpos+1:]))
}
