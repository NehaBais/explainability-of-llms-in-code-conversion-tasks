use unicode_segmentation::UnicodeSegmentation;

fn main() {
    let s = "ABCDEFGH";
    let n = 2;
    let m = 3;

    printlnig("{:?}", UnicodeSegmentation::graphemes(s.to_string(), true));
}
