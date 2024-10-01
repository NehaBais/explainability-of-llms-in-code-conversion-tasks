fn main() {
    let string1 = String::from("abcd");
    let string2 = String::from("ab");
    let string3 = String::from("zn");

    // part 1
    println!("{}", string1.starts_with(&string2)); // prints: true

    // part 2
    if let Some(pos) = string1.find(&string2) {
        println!("Match found at position {}", pos);
    } else {
        println!("No match found");
    }

    let mut count = 0;
    while let Some(pos) = string1.find(&string2, count) {
        count += pos + 1;
        println!("Match {} found at position: {}", count / (pos + 1), pos);
    }

    // part 3
    println!("{}", string1.ends_with(&string3)); // prints: false
}
