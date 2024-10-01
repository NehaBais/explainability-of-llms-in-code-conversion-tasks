fn main() {
    // Comparing two strings for exact equality and inequality
    let string1 = String::from("abcd");
    let string2 = String::from("abcd");
    let string3 = String::from("ABCD");
    println!("{}", string1 == string2); // true
    println!("{}", string1 != string2); // false

    // Comparing two strings for case insensitive equality and inequality
    let string4 = String::from("ABCD");
    println!("{}", string3.to_lowercase() == string4.to_lowercase()); // true (case insensitive)
    println!("{}", string1 != string2); // false (case insensitive)

    // Comparing two strings for lexically ordered before and after
    let string5 = String::from("abcd");
    let string6 = String::from("dcba");
    println!("{}", string5.cmp(&string6).is_less()); // true (lexical comparison)
    println!("{}", string5.cmp(&string6).is_greater()); // false (lexical comparison)
}
