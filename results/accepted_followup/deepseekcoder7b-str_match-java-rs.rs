fn main() {
    // Starting with "ab"
    let str1 = String::from("abcd");
    println!("{}", str1.starts_with("ab")); //returns true

    // Ending with "zn"
    println!("{}", str1.ends_with("zn")); //returns false

    // Containing "bb"
    let str2 = String::from("abab");
    if !str2.contains("bb") {
        println!("true");
    } else {
        println!("false");
    };

    // Containing "ab"
    if !str2.contains("ab") {
        println!("false");
    } else {
        println!("true");
    };

    let mut loc = 0;
    while loc != -1 {
        loc = str2[loc..].find(&"ab").unwrap_or(-1);
        if loc != -1 {
            println!("Found at position: {}", loc);
            loc += 1;
        }
    }
}
