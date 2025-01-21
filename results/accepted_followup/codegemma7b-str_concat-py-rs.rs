const s1: &str = "hello";
println!("{s} world", s1);

let s2 = format!("{s} world", s1);
println!("{}", s2);

let s2 = format!(", {s}, world, mom", s = s1);
println!("{}", s2);