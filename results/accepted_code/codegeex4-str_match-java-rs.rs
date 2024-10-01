fn main() {
    let s1 = "abcd";
    let s2 = "ab";

    println!("{}", s1.starts_with(s2)); // true

    let s3 = "zn";
    println!("{}", s1.ends_with(s3)); // false

    let s4 = "bb";
    println!("{}", s1.contains(s4)); // false
    let s5 = "ab";
    println!("{}", s1.contains(s5)); // true

    let s6 = "abab";

    match s6.find(s5) {
        Some(loc) => println!("Location: {}", loc), // 0
        None => println!("Not found"),
    }

    match s6.find(&s4[1..]) {
        Some(loc) => println!("Location: {}", loc), // 2
        None => println!("Not found"),
    }

    let mut offset = s5.len();
    while let Some(loc) = &s6[offset..].find(s5) {
        println!("Location: {}", offset + *loc);
        offset += s5.len() + *loc;
    }
}
