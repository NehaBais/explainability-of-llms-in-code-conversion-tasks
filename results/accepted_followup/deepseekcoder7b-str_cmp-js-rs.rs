fn main() {
    // Comparing two strings for exact equality and inequality.
    assert_eq!("abcd", "abcd"); // true
    assert_ne!("abcd", "Abcd"); // true

    let num1: i32 = 123;
    assert_eq!(num1, 123); // true
    let str1 = "123";
    let num2: i32 = str1.parse().unwrap();
    assert_eq!(num1, num2); // true

    // Comparing two strings for lexical order before and after.
    assert_eq!("abcd" < "dcba", true); // true
    assert_eq!("abcd" > "dcba", false); // false

    // Case sensitive comparison
    assert_ne!("ABCD".to_lowercase(), "abcd"); // false

    // Comparing two numeric strings. Rust automatically converts string to numbers if possible.
    let num3: i32 = 123;
    assert_eq!(num3, 123); // true
    assert_ne!(num3, "456".parse().unwrap()); // false
}
