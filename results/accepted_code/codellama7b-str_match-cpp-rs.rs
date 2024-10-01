use std::str;

fn main() {
    let s1 = "abcd";
    let s2 = "abab";
    let s3 = "ab";

    // Beginning
    if str::starts_with(s1, s3) {
        println!("{} starts with {}", s1, s3);
    } else {
        println!("{} does not start with {}", s1, s3);
    }

    // End
    if str::ends_with(s1, s3) {
        println!("{} ends with {}", s1, s3);
    } else {
        println!("{} does not end with {}", s1, s3);
    }

    // Anywhere
    let location = s2.find(s3);
    if location == std::string::npos {
        println!("{} was not found in {}", s3, s2);
    } else {
        println!("{} was found at location {} in {}", s3, location, s2);
    }
}
