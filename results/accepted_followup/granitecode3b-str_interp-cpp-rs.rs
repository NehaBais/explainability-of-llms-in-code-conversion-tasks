fn main() {
    let original = "Mary had a X lamb.";
    let to_be_replaced = "X";
    let replacement = "little";
    let new_string = original.replace(&to_be_replaced, &replacement);
    println!("String after replacement: {}", new_string);
}
