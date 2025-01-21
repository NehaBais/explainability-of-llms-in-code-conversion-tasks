fn main() {
    let s1 = "abcd";
    let s2 = "abab";
    let s3 = "ab";

    // Beginning
    if s1.starts_with(s3) {
        println!("String starts with the second string.");
    } else {
        println!("String does not start with the second string.");
    }

    // End
    let len = s1.len();
    if s1.ends_with(s3) {
        println!("String ends with the second string.");
    } else {
        println!("String does not end with the second string.");
    }

    // Anywhere
    let mut loc = s2.find(s3);
    while let Some(pos) = loc {
        println!("Found at position: {}", pos);
        loc = s2[pos + 1..].find(s3);
    }
}