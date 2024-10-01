fn main() {
    let s1 = "abcd";
    let s2 = "abab";
    let s3 = "ab";

    // Beginning
    if s1.starts_with(s3) {
        println!("The first string starts with the second string.");
    } else {
        println!("The first string does not start with the second string.");
    }

    // End
    let len = s1.len();
    if s1[len - s3.len()..] == s3 {
        println!("The first string ends with the second string.");
    } else {
        println!("The first string does not end with the second string.");
    }

    // Anywhere
    let mut loc = s2.find(s3);
    while loc != std::string::String::npos {
        println!("Match found at location: {}", loc);
        loc = s2.find(s3, loc + 1);
    }
}
