fn main() {
    let original = String::from("Mary had a X lamb");
    let little = "little";
    let replaced = original.replace("X", &little); //changes the original string
    println!("{}", replaced);
}
