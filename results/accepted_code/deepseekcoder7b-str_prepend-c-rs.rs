fn main() {
    let mut str = String::from("my String");
    let prefix = "Changed ";

    // Clone the string so that original doesn't get deallocated while we have a reference to it.
    let dup = str.clone();

    // Prepend the clone with the new string.
    str.push_str(prefix);
    str.push_str(&dup);

    println!("{}", str);
}
