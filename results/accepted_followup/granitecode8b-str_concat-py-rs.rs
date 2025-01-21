let s1 = String::from("hello");
println!("{} world", s1);
let s2 = format!("{} world", s1);
println!("{}", s2);
let s3 = vec![String::from("hello"), String::from("world"), String::from("mom")];
let s4 = s3.join(", ");
println!("{}", s4);
let s5 = format!("{}", s4);
println!("{}", s5);