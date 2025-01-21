fn main() {
    let original = String::from("Mary had a X lamb.");
    let to_be_replaced = "X";
    let replacement = "little";

    // Find the index of `toBeReplaced` in `original`
    if let Some(index) = original.find(to_be_replaced) {
        // Replace the substring from the found index with the replacement string
        let new_string = original.replace(&original[index..index + to_be_replaced.len()], replacement);
        println!("String after replacement: {}", new_string);
    } else {
        println!("Substring not found in the original string.");
    }
}