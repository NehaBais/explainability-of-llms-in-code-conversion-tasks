use std::string::String;
fn main() {
    let original = String::from("Mary had a X lamb.");
    let to_be_replaced = String::from("X");
    let replacement = String::from("little");

    // Replace the first occurrence of the substring "X" with "little".
    let new_string: String = original.replace(&to_be_replaced, &replacement);

    println!("String after replacement: {}", new_string);
}
