use std::str;

fn main() {
    let input1 = "abracadabra".to_string();
    let input2 = "abr".to_string();
    match(input1, input2);
}

fn match(first: String, second: String) {
    println!("1. {} starts with {}: {:?}", first, second, first.starts_with(&second));
    let i = first.find(&second[0..1]).unwrap();
    if let Some(i) = i {
        println!("2. {} contains {} at location: {}", &first[..i], second, i);
        for start in i + 1..first.len() {
            let found_after_start = first[start..].find(&second).unwrap();
            if let Some(found_after_start) = found_after_start {
                println!("2.2 {} contains {} at location: {}", &first[i..start + i], second, start + found_after_start);
            } else {
                break;
            }
        }
    }
    println!("3. {} ends with {}: {:?}", first, second, first.ends_with(&second));
}