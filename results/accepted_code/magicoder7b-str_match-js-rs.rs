extern crate regex;
use regex::Regex;

fn main() {
    let string_a = String::from("tacoloco");
    let string_b = String::from("co");
    let mut q1 = false;
    let mut q2multi = vec![];
    let mut q3 = false;

    // stringA starts with stringB
    if string_a.starts_with(&string_b) {
        q1 = true;
    }

    // stringA contains stringB
    if let Some(q2) = string_a.find(&string_b) {
        // multiple matches
        let re = regex::Regex::new(&string_b).unwrap();
        for _ in 0..string_a.matches(&re).count() {
            q2multi.push(q2);
        }
    }

    if !q2multi.is_empty() {
        println!("2: Is '{}' contained in '{}'? Yes, at index {} and it happens {} times within '{}', at index{}{} {}.", 
            string_b, string_a, q2, q2multi.len(), string_a, (if q2multi.len() > 1 {"es"} else {""}), q2multi.join(", "), (if q2multi.len() > 1 {"es"} else {""}))
    } else {
        println!(
            "2: Is '{}' contained in '{}'? {}",
            string_b,
            string_a,
            (if !q2 {
                "No."
            } else {
                "Yes, at index " + &q2.to_string() + "."
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
