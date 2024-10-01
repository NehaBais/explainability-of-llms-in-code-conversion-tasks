fn main() {
    let text = "abcdefgh";
    // starting from n=2 characters in and m=3 in length;
    println!("{}", &text[1..4]);

    // starting from n characters in, up to the end of the string;
    println!("{}", text.get(0..).unwrap());

    // whole string minus last character;
    println!("{}", text[..text.len() - 1]);

    let char_to_find = 'd';
    if let Some(index) = text.find(char_to_find) {
        // starting from a known character char="d" within the string and of m length;
        println!("{}", &text[index..index + 1]);
    } else {
        println!("Character '{}' not found in text.", char_to_find);
    }

    let substring = "cd";
    if let Some(index) = text.find(substring) {
        // starting from a known substring chars="cd" within the string and of m length.
        println!("{}", &text[index..index + 2]);
    } else {
        println!("Substring '{}' not found in text.", substring);
    }
}
