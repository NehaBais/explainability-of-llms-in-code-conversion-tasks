let s1 = "abcd";
let s2 = "abab";
let s3 = "ab";

// Beginning
if s1.starts_with(&s3) {
    println!("s1 starts with s3");
}

// End
if s1.ends_with(&s3) {
    println!("s1 ends with s3");
}

// Anywhere
if let Some(loc) = s2.find(&s3) {
    println!("s2 contains s3 at location {}", loc);

    // Handle multiple occurrences
    let mut count = 1;
    let mut new_loc = loc + s3.len();
    while let Some(next_loc) = s2.find(&s3, new_loc) {
        count += 1;
        new_loc = next_loc + s3.len();
    }
    println!("s3 occurs {} times in s2", count);
}