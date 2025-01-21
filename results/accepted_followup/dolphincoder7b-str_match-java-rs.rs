const TEXT: &str = "abcd";
println!("{}", TEXT.starts_with("ab")); // returns true
println!("{}", TEXT.ends_with("zn")); // returns false
println!("{}", TEXT.contains("bb")); // returns false
println!("{}", TEXT.contains("ab")); // returns true
println!(
    "{}",
    match TEXT.find("bb") {
        Some(loc) => loc,
        None => -1,
    }
);
println!(
    "{}",
    match TEXT.find("ab") {
        Some(loc) => loc,
        None => -1,
    }
);
println!(
    "{}",
    match TEXT.find("ab", 0 + 1) {
        Some(loc) => loc,
        None => -1,
    }
);
