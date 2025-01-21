fn main() {
    let s: &str = "abcdefgh";
    let n: usize = 2;
    let m: usize = 3;
    let char: &str = "d";
    let chars: &str = "cd";

    // starting from n=2 characters in and m=3 in length;
    println!("{}", s[n..n + m]);

    // starting from n characters in, up to the end of the string;
    println!("{}", s[n..]);

    // using a concrete length for the substring
    println!("{}", s[n..8]);

    // using a concrete length for the substring and checking if the index is within bounds
    println!(
        "{}",
        if n + m <= s.len() {
            s[n..n + m]
        } else {
            "Index out of bounds"
        }
    );
}
