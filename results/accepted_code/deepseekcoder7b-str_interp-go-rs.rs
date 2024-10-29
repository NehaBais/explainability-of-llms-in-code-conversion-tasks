fn main() {
    let str = "Mary had a {} lamb";
    let txt = "big";
    let out = format!(str, txt);
    println!("{}", out);
}
