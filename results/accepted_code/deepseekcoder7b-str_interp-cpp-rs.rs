fn main() {
    let original = String::from("Mary had a X lamb.");
    let to_be_replaced = "X";
    let replacement = "big";

    // replace method is only available for Strings, so we need to convert our original string back into its &str form.
    let new_string = original.replace(&to_be_replaced, replacement);

    println!("String after replacement: {}", new_string);
}
