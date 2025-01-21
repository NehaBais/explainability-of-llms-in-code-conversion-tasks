fn main() {
    println!(
        "{}, {}, {}, {}, {}, {}",
        "abcd" == "abcd",
        123 == 123,
        123.to_string() == "123",
        "abcd" != "dcba",
        "abcd".to_lowercase() == "abcd".to_lowercase(),
    );
}
