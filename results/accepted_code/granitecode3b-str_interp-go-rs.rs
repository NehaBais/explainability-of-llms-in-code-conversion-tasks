fn main() {
    let str = format!("Mary had a {} lamb", "big");
    let txt = "little";
    let out = format!("{}", str.replace("%s", &txt));
    println!("{}", out);
}
