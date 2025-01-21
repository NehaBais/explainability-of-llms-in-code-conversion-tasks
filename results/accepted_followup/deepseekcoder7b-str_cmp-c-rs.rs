extern crate itertools;  // Add this line to import the 'itertools' crate at the top of your file
use itertools::IteratorsExt;  // Import Itertools trait into scope

fn compare(a: &str, b: &str) {
    println!(
        "{} {} {} {} {} {}",
        a,
        if a == b {"eq"} else {"ne"},
        if a > b {"gt"} else {"lt"},
        if !(a < b) {"ge"} else {"le"},
        if a < b {"lt"} else {"ge"},
        if !(a > b) {"le"} else {"gt"},
        b
    );
}

fn compare_case_insensitive(a: &str, b: &str) {
    println!(
        "{} {} {} {} {} {} (ignoring case)",
        a,
        if a.to_lowercase() == b.to_lowercase() {"eq"} else {"ne"},
        if a.to_lowercase() > b.to<｜begin▁of▁sentence｜>.to_lowercase() {"gt"} else {"lt"},
        if !(a.to_lowercase() < b.to_lowercase()) {"ge"} else {"le"},
        if a.to_lowercase() < b.to_lowercase() {"lt"} else {"ge"},
        if !(a.to_lowercase() > b.to_lowercase()) {"le"} else {"gt"},
        b
    );
}

fn main() {
    let strings = vec!["ball", "bell", "BALL", "YUP", "YEP"];
    for (a, b) in strings.iter().combinations(2) {  // Use combinations function from itertools trait
        compare(a, b);
        compare_case_insensitive(a, b);
    }
}