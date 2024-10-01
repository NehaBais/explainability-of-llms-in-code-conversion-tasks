fn main() {
    let original = "Mary had a X lamb."; // original string
    let to_replace = "X"; // character to replace
    let replacement = "big"; // string to replace with

    let new_string = original.replace(&to_replace, &replacement).unwrap();
    println!("String after replacement: {}", new_string); // print the replaced string
}
