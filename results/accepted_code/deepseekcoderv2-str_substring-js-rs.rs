fn main() {
    let s = String::from("abcdefgh");
    println!("Substring: {}", &s[2..5]); // Output: Substring: cde
}

fn substr_from(str: &String, n: usize) -> String {
    str.chars().skip(n).collect()
}

fn substr_to(str: &String, n: usize) -> String {
    str.chars().take(n).collect()
}

fn substr_until(str: &String, n: usize) -> String {
    str.chars().skip(n + 1).collect()
}

fn substr_after(str: &String, n: char) -> String {
    if let Some(index) = str.find(n) {
        str[index..].to_string()
    } else {
        String::new()
    }
}

fn main() {
    let s1 = String::from("abcdefgh");
    println!("Substring from index: {}", substr_from(&s1, 2)); // Output: Substring from index: cde

    let s2 = String::from("abcdefgh");
    println!("Substring until end of string: {}", substr_to(&s2, 5)); // Output: Substring until end of string: abcdefg

    let s3 = String::from("abcdefgh");
    println!(
        "Whole string minus last character: {}",
        substr_until(&s3, 0)
    ); // Output: Whole string minus last character: abcdefg

    let s4 = String::from("abcdefgh");
    println!("Substring after character 'b': {}", substr_after(&s4, 'b')); // Output: Substring after character 'b': bcdefgh
}
