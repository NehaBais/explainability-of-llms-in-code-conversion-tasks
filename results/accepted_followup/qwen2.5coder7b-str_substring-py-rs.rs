fn main() {
    let s = "abcdefgh";
    let n: usize = 2;
    let m: usize = 3;
    let char_search = 'd';
    let chars_search = "cd";

    // starting from n=2 characters in and m=3 in length;
    println!("{}", &s[n..n + m]);

    // starting from n characters in, up to the end of the string;
    println!("{}", &s[n..]);

    // whole string minus last character;
    println!("{}", &s[..s.len() - 1]);

    // starting from a known character char="d" within the string and of m length;
    let mut indx = None;
    for (i, c) in s.char_indices() {
        if c == char_search {
            indx = Some(i + char_search.len_utf8());
            break;
        }
    }

    if let Some(indx_start) = indx {
        println!("{}", &s[indx_start..indx_start + m]);
    } else {
        println!("Character not found");
    }

    // starting from a known substring chars="cd" within the string and of m length.
    let mut indx = None;
    for (i, c) in s.char_indices() {
        if &s[i..i + chars_search.len()] == chars_search {
            indx = Some(i + chars_search.len());
            break;
        }
    }

    if let Some(indx_start) = indx {
        println!("{}", &s[indx_start..indx_start + m]);
    } else {
        println!("Substring not found");
    }
}
