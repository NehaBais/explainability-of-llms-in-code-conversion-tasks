fn main() {
    let original = String::from("Mary had a X lamb.");
    let to_be_replaced = String::from("X");
    let replacement = String::from("little");

    let new_string: String = original.replace(to_be_replaced.as_str(), replacement.as_str());

    println!("String after replacement: {}", new_string);
}