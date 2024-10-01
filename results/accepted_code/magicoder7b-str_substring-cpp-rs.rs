fn main() {
    let s = "0123456789".to_string(); // String in Rust needs to be created using the .to_string() method

    let n = 3;
    let m = 4;
    let c: char = '2';
    let sub = "456";

    println!("{}", s.chars().skip(n).take(m).collect::<String>()); // Substring from n to n+m characters.
    println!("{}", s.chars().skip(n).collect::<String>()); // Substring from n to end of string.
    let last_char = &s[0..s.len() - 1];
    println!("{}", last_char); // The whole string minus the last character.
    if let Some(pos) = s.find(&c) {
        println!("{}", s.chars().skip(pos).take(m).collect::<String>()); // Substring from nth occurrence of c to n+m characters.
    }
    if let Some(sub_start) = s.find(sub) {
        println!("{}", s.chars().skip(sub_start).take(m).collect::<String>()); // Substring from nth occurrence of sub to n+m characters.
    }
}
