fn main() {
    let mut original = String::from("Mary had a X lamb");
    let little = String::from("little");
    
    // Replace "X" with "little", and store result in `original`.
    original.replacen!(original.as_str(), "X", &little, std::usize::MAX); 

    println!("{}", original);
}