// Compare two strings for exact equality
func compareStrings(a, b string) bool {
    return a == b
}

// Compare two strings for inequality (i.e., the inverse of exact equality)
func compareStringInEquality(a, b string) bool {
    return !compareStrings(a, b)
}

// Compare two strings to see if one is lexically ordered before than the other
func compareLexicalOrderBeforeAfter(a, b string) (bool, bool) {
    cmp := strings.Compare(a, b)
    return cmp < 0, cmp > 0
}

// Compare two strings to see if one is lexically ordered after than the other
func compareLexicalOrderAfterBefore(a, b string) (bool, bool) {
    cmp1, cmp2 := compareLexicalOrderBeforeAfter(b, a)
    return !cmp1, !cmp2
}