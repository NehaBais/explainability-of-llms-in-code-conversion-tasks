fn main() {
    let s1 = "abcd";
    let s2 = "abab";
    let s3 = "ab";

    if let Some(match_pos) = s1.find(&s3[0..]) {
        println!("Successfully verified: s1 starts with s3");
    } else {
        println!("Verification failed: s1 does not start with s3");
    };

    if let Some(match_pos) = s1.find(&s3[0..]) {
        println!("Successfully verified: s1 contains s3");
    } else {
        println!("Verification failed: s1 does not contain s3");
    };

    if let Some(match_pos) = &s2[..].find(&s3[0..]) {
        println!("Found match at pos {}", match_pos);  // Found match at pos 0
    } else {
        println!("Did not find any matches");
    };

    if let Some(match_pos) = s2.find(&s3[0..]) {
        println!("Successfully verified: s2 ends with s3");
    } else {
        println!("Verification failed: s2 does not end with s3");
    };
}