let s1 = String::from("hello");
println!("{} world", s1);
let s2 = format!("{} world", s1);
println!("{}", s2);
let mut s3 = String::from("hello");
s3.push_str(", mom");
let s4 = format!("{}, {}, {}", s3, "world", "mom");
println!("{}", s4);