fn main() {
    let original = String::from("Mary had a X lamb.");
    let to_be_replaced = "X";
    let replacement = "little";

    // The `replace` function of String type in rust does not require finding the index manually.
    let new_string = original.replace(to_be_replaced, replacement);

    println!("String after replacement: {}", new_string);
}