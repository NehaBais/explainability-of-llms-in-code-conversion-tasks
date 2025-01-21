package main

func Substring(str string, n, m int) string {
	return str[n : n+m]
}
func Substring(str string, n int) string {
	return str[n:]
}
func Substring(str string) string {
	return str[:len(str)-1]
}
func Substring(str string, c rune, m int) string {
	return str[str.Index(c) : str.Index(c)+m+1]
}
func Substring(str string, sub string, m int) string {
	return str[str.Index(sub) : str.Index(sub)+m+1]
}
