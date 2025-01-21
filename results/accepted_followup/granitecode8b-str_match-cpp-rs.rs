const s1: &str = "abcd";
const s2: &str = "abab";
const s3: &str = "ab";
// Beginning
println!("{}", s1.starts_with(s3));
// End
println!("{}", s1.ends_with(s3));
// Anywhere
println!("{}", s1.contains(s2));
