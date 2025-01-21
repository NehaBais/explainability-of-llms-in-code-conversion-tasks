fn main() {
    let s1 = String::from("abcd");
    let s2 = String::from("ab");

    println!("{}", s1.starts_with(&s2)); // Part 1: checks if s1 starts with s2

    println!("{}", s1.contains(&s2)); // Part 2: checks if s1 contains s2 anywhere in it
    let mut index = 0;

    while let Some(position) = s1[index..].find(&s2) {
        // Optional requirement to find location of match for part 2
        println!("Found '{}' at position {}", &s2, index + position);
        index += position + s2.len();
    }

    let s3 = String::from("zn");
    println!("{}", s1.ends_with(&s3)); // Part 3: checks if s1 ends with s3

    let s4 = String::from("abab");

    println!("{}", s4.starts_with(&s2));
    println!("{}", s4.contains(&s2));

    while let Some(position) = s4[index..].find(&s2) {
        println!("Found '{}' at position {}", &s2, index + position);
        index += position + s2.len();
    }

    println!("{}", s4.ends_with(&s3));
}
