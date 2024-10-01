fn main() {
    let s1 = String::from("abcd");
    let s2 = String::from("dcba");

    println!("{} == {}: {}", s1, s2, s1 == s2); // true
    println!("{} === {}: {}", s1, s2, s1 == s2); // false
    println!("{} != {}: {}", s1, s2, s1 != s2); // false
    println!("{} !== {}: {}", s1, s2, s1 != s2); // true
    println!("{} < {}: {}", s1, s2, s1 < s2); // true
    println!("{} > {}: {}", s1, s2, s1 > s2); // false
    let s3 = s1.to_lowercase();
    let s4 = s2.to_lowercase();
    println!("{} == {}: {}", s3, s4, s3 == s4); // true
}
