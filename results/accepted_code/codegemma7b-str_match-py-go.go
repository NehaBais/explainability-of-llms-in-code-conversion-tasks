func startsWith(str, substr string) bool {
	return strings.HasPrefix(str, substr)
}

func contains(str, substr string) bool {
	return strings.Contains(str, substr)
}

func endsWith(str, substr string) bool {
	return strings.HasSuffix(str, substr)
}

func findFirst(str, substr string) int {
	return strings.Index(str, substr)
}

func findNext(str, substr string, start int) int {
	return strings.Index(str[start:], substr) + start
}