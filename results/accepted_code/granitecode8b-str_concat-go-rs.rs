fn main() {
    let mut s = String::from("hello"); // text assigned to a string variable
    println!("{}", s); // output string variable
    println!("{} literal", s); // this output is requested in the task description
    let s2 = format!("{} literal", s); // concatenate variable and literal, assign result to another string variable
    println!("{}", s2); // output second string variable
}
