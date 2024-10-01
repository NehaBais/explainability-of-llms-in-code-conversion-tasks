fn main() {
    // text assigned to a string variable
    let s = String::from("hello");

    // output string variable
    println!("{}", s);

    // this output requested by original task descrption, although
    // not really required by current wording of task description.
    println!("{} literal", s);

    // concatenate variable and literal, assign result to another string variable
    let s2 = format!("{} literal", s);

    // output second string variable
    println!("{}", s2);
}
