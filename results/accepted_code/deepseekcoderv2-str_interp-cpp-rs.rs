fn main() {
    let original = String::from("Mary had a X lamb.");
    let to_be_replaced = "X";
    let replacement = "little";

    // Find the position of the first occurrence of 'X' in the string
    let index = original.find(to_be_replaced).unwrap();

    // Replace the substring between that index and the end of the string with 'replacement'
    let new_string = format!("{}{}", &original[0..index], replacement);

    println!("String after replacement: {}", new_string);
}
