fn main() {
    let s1 = "abcd";
    let s2 = "abab";
    let s3 = "ab";

    // Beginning
    if s1.starts_with(&s3) {
        println!("The first string starts with the second.");
    } else {
        println!("The first string does not start with the second.");
    }

    // End
    if s1.ends_with(&s3) {
        println!("The first string ends with the second.");
    } else {
        println!("The first string does not end with the second.");
    }

    // Anywhere
    if let Some(index) = s1.find(&s3) {
        println!("The first string contains the second at index {}", index);
    } else {
        println!("The second string was not found in the first string");
    }
}