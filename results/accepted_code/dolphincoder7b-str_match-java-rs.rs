let text = "abcd";
println!("{}", text.starts_with("ab"));  // returns true
println!("{}", text.ends_with("zn"));  // returns false
println!("{}", text.contains("bb"));  // returns false
println!("{}", text.contains("ab"));  // returns true
println!("{}", match text.find("bb") {
    Some(loc) => loc,
    None => -1,
});
println!("{}", match text.find("ab") {
    Some(loc) => loc,
    None => -1,
});
println!("{}", match text.find("ab", 0+1) {
    Some(loc) => loc,
    None => -1,
});