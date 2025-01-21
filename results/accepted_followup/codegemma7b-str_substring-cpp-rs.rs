println!("{}", &s[s.find(c).unwrap()..n + m]);
println!("{}", &s[s.find(&sub).unwrap()..n + m]);
