fn main() {
    let str = "abcdefgh";

    // Starting from n characters in and of m length;
    println!("{}", &str[2..5]); // =>  cde

    // Starting from n characters in, up to the end of the string;
    println!("{}", &str[2..]); // =>  cdefgh
    println!("{}", str.substring(2)); // =>  cdefgh

    // Whole string minus last character;
    println!("{}", &str[..str.len() - 1]); // =>  abcdefg

    // Starting from a known character within the string and of m length;
    let b_index = str.find('b').unwrap(); // find index of 'b' in the string
    println!("{}", &str[b_index..b_index + 3]); // =>  bcd

    // Starting from a known substring within the string and of m length;
    let bc_index = str.find("bc").unwrap(); // find index of "bc" in the string
    println!("{}", &str[bc_index..bc_index + 3]); // =>  bcd
}
