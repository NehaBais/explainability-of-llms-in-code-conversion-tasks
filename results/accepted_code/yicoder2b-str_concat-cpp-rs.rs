fn main() {
    let s = "hello";
    println!("{} literal", s);
    let s2 = format!("{}{}", &s, " literal");
    println!("{}", s2);
}
