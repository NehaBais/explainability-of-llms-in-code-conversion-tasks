fn sconcat(s1: &str, s2: &str) -> String {
    format!("{}{}", s1, s2)
}

fn main() {
    let s = "hello";
    println!("{}", s);

    let s2 = sconcat(&s, " literal");
    println!("{}", s2);
}
