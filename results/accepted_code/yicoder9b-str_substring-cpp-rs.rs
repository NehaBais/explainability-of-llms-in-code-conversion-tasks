fn main() {
    let s = String::from("0123456789");

    let n = 3;
    let m = 4;
    let c = '2';
    let sub = "456".to_string();

    println!("{}", &s[n..n + m]);
    println!("{}", &s[n..]);
    println!("{}", &s[0..s.len() - 1]);
    let c_pos = s
        .chars()
        .enumerate()
        .find_map(|(&i, char)| if char == c { Some(i) } else { None });
    if let Some(c_pos) = c_pos {
        println!("{}", &s[c_pos..c_pos + m]);
    }
    let sub_pos = s.find(&sub[..]).unwrap();
    println!("{}", &s[sub_pos..sub_pos + m]);
}
