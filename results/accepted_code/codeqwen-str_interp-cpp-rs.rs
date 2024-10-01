fn main() {
    let original = String::from("Mary had a X lamb.");
    let replacement = "little";
    let new_string = original.replace("X", replacement);
    println!("String after replacement: {}", new_string);
}
