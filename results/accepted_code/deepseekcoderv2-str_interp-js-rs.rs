fn main() {
    let original = "Mary had a X lamb";
    let little = "little";
    let replaced = format!("{}", original.replace("X", little)); //does not change the original string
    println!("{}", replaced);
}
