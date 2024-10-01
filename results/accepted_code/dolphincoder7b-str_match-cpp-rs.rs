use std::string;

let s1 = "abcd";
let s2 = "abab";
let s3 = "ab";
// Beginning
println!("{}", s1.starts_with(&s3)); // True
// Ending
println!("{}", s1.ends_with(&s3)); // False
// Anywhere
println!("{}", s2.contains(&s3)); // True
let loc = s2.find(&s3).unwrap();
println!("Location of match for part 2 is {}", loc); // Location of match for part 2 is 0
let loc2 = s2.find(&s3, loc + 1).unwrap();
println!("Second location of match is {}", loc2); // Second location of match is 2