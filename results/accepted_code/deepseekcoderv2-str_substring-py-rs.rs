fn main() {
    let s = "abcdefgh";
    let n = 2;
    let m = 3;
    let char_target = 'd';
    let substr_target = "cd";

    // starting from n characters in and of m length;
    if n > 0 && n + m <= s.len() {
        println!("{}", &s[n-1..n+m-1]);
    } else {
        println!("Index out of bounds");
    }

    // starting from n characters in, up to the end of the string;
    if n > 0 && n <= s.len() {
        println!("{}", &s[n-1..]);
    } else {
        println!("Index out of bounds");
    }

    // whole string minus the last character;
    println!("{}", &s[0..s.len()-1]);

    // starting from a known character char="d" within the string and of m length;
    if let Some(indx) = s.find(char_target) {
        if indx + m <= s.len() {
            println!("{}", &s[indx..indx+m]);
        } else {
            println!("Index out of bounds");
        }
    } else {
        println!("Character not found");
    }

    // starting from a known substring chars="cd" within the string and of m length. 
    if let Some(indx) = s.find(substr_target) {
        if indx + m <= s.len() {
            println!("{}", &s[indx..indx+m]);
        } else {
            println!("Index out of bounds");
        }
    } else {
        println!("Substring not found");
    }
}