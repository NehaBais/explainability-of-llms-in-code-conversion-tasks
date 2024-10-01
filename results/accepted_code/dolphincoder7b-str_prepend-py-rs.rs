fn main() {
    let s = "12345678";
    let new_string = format!("0{}", s); // by formatting with a placeholder {}
    println!("{}", new_string);
}
