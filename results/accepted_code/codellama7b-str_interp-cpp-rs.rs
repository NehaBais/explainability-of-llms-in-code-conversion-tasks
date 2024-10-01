use std::string::ToString;

fn main() {
    let original = "Mary had a X lamb.".to_string();
    let to_be_replaced = "X".to_string();
    let replacement = "little".to_string();

    let new_string = original.replace(
        original.find(&to_be_replaced).unwrap(),
        to_be_replaced.len(),
        &replacement,
    );

    println!("String after replacement: {}", new_string);
}
