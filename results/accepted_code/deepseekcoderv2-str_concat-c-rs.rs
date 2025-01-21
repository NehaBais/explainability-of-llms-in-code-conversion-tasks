fn main() {
    let s = "hello";
    println!("{}", s);
    
    // Concatenate strings using format macro
    let s2 = format!("{}{}", s, " literal");
    println!("{}", s2);
}