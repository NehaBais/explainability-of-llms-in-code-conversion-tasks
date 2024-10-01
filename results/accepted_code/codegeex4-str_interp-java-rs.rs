fn main() {
    let adjective: &str = "little";
    let lyric: String = format!("Mary had a {} lamb", adjective);

    println!("{}", lyric);
}
