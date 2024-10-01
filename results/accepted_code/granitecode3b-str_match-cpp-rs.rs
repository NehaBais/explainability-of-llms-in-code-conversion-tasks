let s1 = "abcd";
let s2 = "abab";
let s3 = "ab";
// Beginning
println!("{}", s1.starts_with(s3));
// End
println!("{}", s1.ends_with(s3));
// Anywhere
println!("{}", s1.contains(s2));
println!("{}", s1.find(s2).unwrap());