fn main() {
    let str = "Mary had a %s lamb";
    let txt = "little";
    let out = format!(str, str, txt);
    println!("{}", &out);
}