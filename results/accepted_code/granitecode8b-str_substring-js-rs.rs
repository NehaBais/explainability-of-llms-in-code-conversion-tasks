let str = String::from("abcdefgh");
let n = 2;
let m = 3;
// starting from n characters in and of m length;
println!("{}", &str[n..(n+m)]); // => "cde"
// starting from n characters in, up to the end of the string;
println!("{}", &str[n..]); // => "cdefgh"
// whole string minus last character;
println!("{}", &str[..(str.len() - 1)]); // => "abcdefg"
// starting from a known character within the string and of m length;
println!("{}", &str[(str.find('b').unwrap() + n)..(str.find('b').unwrap() + n + m)]); // => "bcd"
// starting from a known substring within the string and of m length. 
println!("{}", &str[(str.find("bc").unwrap() + n)..(str.find("bc").unwrap() + n + m)]); // => "bcd"