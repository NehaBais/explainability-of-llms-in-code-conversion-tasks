const S1: String = String::from("hello");
println!("{} world", S1);
const S2: String = format!("{} world", S1);
println!("{}", S2);
let mut S3 = String::from("hello");
S3.push_str(", mom");
const S4: String = format!("{}, {}, {}", S3, "world", "mom");
println!("{}", S4);