fn main() {
    let s1 = "abcd";
    let s2 = "abab";
    let s3 = "ab";

    // Beginning
    if s1.starts_with(s3) {
        println!("s1 starts with s3");
    } else {
        println!("s1 does not start with s3");
    }

    // End
    if s1.ends_with(s3) {
        println!("s1 ends with s3");
    } else {
        println!("s1 does not end with s3");
    }

    // Anywhere
    let loc = s2.find(s3);

    match loc {
        Some(l) => println!("s3 found in s2 at location: {}", l),
        None => println!("s3 not found in s2"),
    }
}
