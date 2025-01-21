fn main() {
    // Comparing two strings for exact equality
    assert_eq!("abcd", "abcd"); // true
    assert_ne!("abcd", "dcba"); // true

    // Lexical comparison and case sensitivity
    let s1 = "abcd";
    let s2 = "ABCD";
    assert!(s1.to_lowercase() == s2.to_lowercase()); // true (case insensitive)
    assert!(s1 < s2); // false (lexical comparison based on ASCII values)

    // Numeric strings are not automatically converted to integers when using comparison operators
    assert_eq!("123", 123.to_string()); // now this works correctly
}
