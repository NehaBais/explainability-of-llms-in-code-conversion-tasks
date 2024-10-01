use std::fs;

let metadata = fs::metadata("input.txt")?;
println!("Size of input.txt is {}", metadata.len());