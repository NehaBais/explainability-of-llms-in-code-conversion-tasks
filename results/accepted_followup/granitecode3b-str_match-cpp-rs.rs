const s1 = "abcd";
const s2 = "abab";
const s3 = "ab";
// Beginning
println!("{}", s1.starts_with(s3));
// End
println!("{}", s1.ends_with(s3));
// Anywhere
println!("{}", s1.contains(s2));
println!("{}", s1.find(s2).unwrap());