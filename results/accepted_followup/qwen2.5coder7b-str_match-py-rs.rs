fn main() {
    let a = String::from("abcd");
    let b = String::from("ab");

    println!("{}", a.starts_with(&b)); // prints: true
    println!("{}", !a.ends_with(&String::from("zn"))); // prints: true

    if a.contains(&b) {
        println!("Substring found!");
    } else {
        println!("Substring not found!");
    }

    let loc = a.find(&b);
    match loc {
        Some(index) => println!("Location: {}", index), // prints: Location: 0
        None => println!("Not Found!"),
    };

    if let Some(loc) = a.find(&b) {
        println!("Next location: {}", loc + b.len()); // prints: Next location: 2
    }
}
