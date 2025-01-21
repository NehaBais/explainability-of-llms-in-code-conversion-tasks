fn main() {
    let original = String::from("Mary had a X lamb");
    let little = "little";
    let replaced = original.replace("X", little); // creates a new string with the replacement

    println!("{}", replaced);
}
