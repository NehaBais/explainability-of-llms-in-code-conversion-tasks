const s1: &str = "abcd";
const s2: &str = "ab";
println!("{} starts with {}: {}", s1, s2, s1.starts_with(s2));
println!("{} ends with {}: {}", s1, s2, s1.ends_with(s2));
let s3 = "abab";
let s4 = "ab";
println!("{} contains {}: {}", s3, s4, s3.contains(s4));