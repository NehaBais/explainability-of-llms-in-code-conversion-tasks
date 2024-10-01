let str = "abcdefgh";
let n = 2;
let m = 3;
// starting from n characters in and of m length
println!("{}", str.get(n..(n + m)));
// starting from n characters in, up to the end of the string
println!("{}", str.get(n..));
// whole string minus last character
println!("{}", str.get(..str.len() - 1));
// starting from a known character within the string and of m length
println!("{}", str.get(str.find("b").unwrap()..m));
// starting from a known substring within the string and of m length
println!("{}", str.get(str.find("bc").unwrap()..m));