fn main() {
    let s1 = "abcd";
    let s3 = "ab";

    // Determining if the first string starts with second string
    assert!(s1.starts_with(s3));

    // Determining if the first string ends with the second string
    assert!(s1.ends_with(s3));

    // Determining if the first string contains the second string at any location
    let default_pos: usize = 0;

    for (pos, c) in s1.chars().enumerate() {
        if c == 'a' {
            println!("Found at position: {}", pos + default_pos);
        }
    }
}
