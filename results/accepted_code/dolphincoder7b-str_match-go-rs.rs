use regex::Regex;

fn match(first: &str, second: &str) {
    println!("1. {} starts with {}: {}", first, second, first.starts_with(second));

    let re = Regex::new(&format!("(?<={}", second)).as_str()).unwrap();
    for cap in re.find_iter(&first) {
        println!("2. {} contains {} at location {}.", &first, &second, cap.start() + 1);
    }
    
    println!("3. {} ends with {}: {}", first, second, first.ends_with(second));
}

fn main() {
    match("abracadabra", "abr");
}