fn main() {
    let original = String::from("Mary had a X lamb.");
    let to_be_replaced = String::from("X");
    let replacement = String::from("little");

    let new_string = original.replace(&to_be_replaced, &replacement);

    println!("String after replacement: {}", new_string);
}
