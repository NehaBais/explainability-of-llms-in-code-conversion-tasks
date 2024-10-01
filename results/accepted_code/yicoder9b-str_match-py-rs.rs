fn main() {
    let s1 = String::from("abcd");
    let s2 = String::from("ab");
    let s3 = String::from("zn");

    // Determine if first string starts with second string.
    if s1.starts_with(&s2) {
        println!("{} starts with {}", s1, s2);
    } else {
        println!("{} does not start with {}", s1, s2);
    }

    // Determine if first string ends with second string.
    if s1.ends_with(&s3) {
        println!("{} ends with {}", s1, s3);
    } else {
        println!("{} does not end with {}", s1, s3);
    }

    // Determine if first string contains second string at any location.
    if let Some(pos) = s1.find(&s2) {
        println!("{} found in {} at position {}", s2, s1, pos);
    } else {
        println!("{} not found in {}", s2, s1);
    }

    // Determine multiple occurrences of a string.
    let s4 = String::from("abab");
    let s5 = String::from("ab");
    let mut pos = 0;
    while let Some(p) = s4[pos..].find(&s5) {
        println!("{} found in {} at position {}", s5, s4, p + pos);
        pos += p + 1; // move to the next character after match
    }
}
