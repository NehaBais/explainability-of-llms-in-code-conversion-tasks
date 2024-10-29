fn main() {
    // Starting with "ab"
    let str1 = String::from("abcd");
    println!("{}", str1.starts_with("ab")); //returns true

    // Ending with "zn"
    println!("{}", str1.ends_with("zn")); //returns false

    // Containing "bb"
    let str2 = String::from("abab");
    println!("{}", str2.contains("bb")); //returns true (Note: In Rust, it's `println!("{}", !str2.contains("bb"))` to get false)

    // Containing "ab"
    println!("{}", str2.contains("ab")); //returns true

    let mut loc = 0;
    while (loc = str2[..].find(&"ab"[..]).unwrap_or(-1)) != -1 {
        println!("Found at position: {}", loc);
        loc += 1;
    }
}
