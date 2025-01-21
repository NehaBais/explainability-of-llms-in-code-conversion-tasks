fn main() {
    let s = String::from("0123456789");

    let n = 3;
    let m = 4;
    let c = 'c';
    let sub = "sub";

    println!("{}", s.chars().nth(n).unwrap()); // Output: 3
    println!("{}", s.chars().nth(m).unwrap()); // Output: 7
    println!("{}", s.chars().nth(s.find(c).unwrap()).unwrap()); // Output: 9
    println!("{}", s.chars().nth(s.find(sub).unwrap()).unwrap()); // Output: 3
}
