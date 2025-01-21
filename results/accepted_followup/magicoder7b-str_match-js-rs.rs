extern crate regex;
use regex::Regex;

fn main() {
    let string_a = String::from("tacoloco");
    let string_b = String::from("co");
    let mut q1 = false;
    let mut matches: Vec<usize> = vec![];
    let mut q3 = false;

    // stringA starts with stringB
    if string_a.starts_with(&string_b) {
        q1 = true;
    }

    // stringA contains stringB
    if let Some(index) = string_a.find(&string_b) {
        matches = vec![];

        let re = Regex::new(&string_b).unwrap();
        for _ in 0..re.find_iter(&string_a).count() {
            matches.push(index);
        }
    }

    if !matches.is_empty() {
        println!(
            "2: Is '{}' contained in '{}'? Yes, at index {} and it happens {} times within '{}', at indices{}{} {}.", 
            string_b, 
            string_a, 
            matches[0], 
            matches.len(), 
            string_a, 
            (if matches.len() > 1 {"es"} else {""}), 
            matches.join(", "), 
            (if matches.len() > 1 {"es"} else {""}));
    } else {
        println!(
            "2: Is '{}' contained in '{}'? {}",
            string_b,
            string_a,
            (if q1 {
                "No."
            } else {
                "Yes, at index " + &matches[0].to_string() + "."
            })
        );
    }

    // stringA ends with stringB
    if string_a.ends_with(&string_b) {
        q3 = true;
    }

    println!(
        "1: Does '{}' start with '{}'? {}",
        string_a,
        string_b,
        (if q1 { "Yes." } else { "No." })
    );

    println!(
        "3: Does '{}' end with '{}'? {}",
        string_a,
        string_b,
        (if q3 { "Yes." } else { "No." })
    );
}
