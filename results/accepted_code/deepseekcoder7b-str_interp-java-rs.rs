fn main() {
    let adjective = "big";
    let mut lyric = String::from("Mary had a X lamb");

    // Replace the placeholder `X` with the variable value.
    lyric = lyric.replace("X", adjective);

    println!("{}", lyric);
}
