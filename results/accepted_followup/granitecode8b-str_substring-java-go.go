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
func Substring(str string, c byte, m int) string {
	i := strings.IndexByte(str, c)
	if i == -1 {
		return ""
	}
	return str[i : i+m+1]
}
func Substring(str string, sub string, m int) string {
	i := strings.Index(str, sub)
	if i == -1 {
		return ""
	}
	return str[i : i+m+1]
}
