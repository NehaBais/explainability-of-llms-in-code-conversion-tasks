let mut s = "world!".to_string();
s = format!("Hello, {}", &s);
println!("{}", s);