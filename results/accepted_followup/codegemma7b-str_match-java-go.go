package main

import "strings"

func startsWith(str, prefix string) bool {
	return strings.HasPrefix(str, prefix)
}

func contains(str, substr string) bool {
	return strings.Contains(str, substr)
}

func endsWith(str, suffix string) bool {
	return strings.HasSuffix(str, suffix)
}

func indexOf(str, substr string) int {
	return strings.Index(str, substr)
}

func lastIndexOf(str, substr string) int {
	return strings.LastIndex(str, substr)
}
