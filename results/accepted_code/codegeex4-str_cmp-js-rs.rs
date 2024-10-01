fn main() {
    println!(
        "{}",
        "abcd" == "abcd"
        && "abcd" === "abcd" // true
        && "123".parse::<i32>().unwrap_or_default() == "123".parse::<i32>().unwrap_or_default()
        && "ABCD" != "abcd" // false
        && "ABCD" != "abcd" // true
        && "123".parse::<i32>().unwrap_or_default() != "123".parse::<i32>().unwrap_or_default()  // false
    );

    println!(
        "{}",
        "abcd" < "dcba" // true
        && "dcba" > "abcd" // true
    );

    // To compare two strings case-insensitive:
    println!(
        "{}",
        "ABCD".to_lowercase() == "abcd".to_lowercase() // true (case insensitive)
    );
}
