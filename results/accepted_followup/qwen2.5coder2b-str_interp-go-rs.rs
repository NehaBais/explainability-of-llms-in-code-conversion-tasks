fn main() {
    let str = String::from("Mary had a {} lamb");
    let txt = String::from("little");
    let out: String = format!("{}", txt);
    println!("{}", out);
}
