fn str_fromstr(s: &str, in: &str, m: isize) -> Result<String, ()> {
    let idx = s.find(in).ok_or("--error--")?;
    substring(s, idx as usize, m)
}


fn main() {
    let s = "hello world shortest program";

    println!("{}", str_fromstr(&s, "ro", 3)); // "rog"
}