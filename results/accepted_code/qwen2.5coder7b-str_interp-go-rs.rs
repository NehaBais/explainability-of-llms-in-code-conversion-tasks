fn main() {
    let str = "Mary had a {} lamb";
    let txt = "little";
    let out = format!(str, txt);
    println!("{}", out);
}