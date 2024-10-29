fn main() {
    // Comparing two strings for exact equality and inequality.
    assert_eq!("abcd", "abcd"); // true
    assert_ne!("abcd", "Abcd"); // true
    123 == 123; // true
    assert_ne!(123, "123"); // true

    // Comparing two strings for lexical order before and after.
    "abcd" < "dcba"; // true
    "abcd" > "dcba"; // false

    // Case sensitive comparison
    assert_eq!("ABCD", "abcd"); // false

    // Case insensitive comparison
    "ABCD".to_lowercase() == "abcd".to_lowercase(); // true

    // Comparing two numeric strings. Rust automatically converts string to numbers if possible.
    123 == 123; // true
    123 != "456"; // false
}
