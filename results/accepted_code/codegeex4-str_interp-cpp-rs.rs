fn main() {
    let mut original = String::from("Mary had a X lamb.");
    let to_be_replaced = String::from("X");
    let replacement = String::from("little");

    if let Some(pos) = original.find(&to_be_replaced) {
        original.replace_range(pos..pos + to_be_replaced.len(), &replacement);
    }

    println!("String after replacement: {}", original);
}
