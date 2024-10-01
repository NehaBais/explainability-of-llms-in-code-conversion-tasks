fn main() {
    println!("{}", string_compare());
}

fn string_compare() -> bool {
    let str1 = "abcd";
    let str2 = "abcd";
    // Equal value check
    if *str1 == *str2 {
        true
    } else if str1.len() != str2.len() {
        false
    } else {
        // Compare lexically for strings
        let result = str1.chars().next_back();
        match result {
            Some(last1) => {
                let last2 = str2.chars().next_back();
                match last2 {
                    Some(_) => last1.cmp(&last2) == Some(order), 
                    // Case sensitive comparison of the strings
                    None if last1.is_lowercase() && last2.is_uppercase() || last2.is_lowercase() && last1.is_uppercase() => {
                        true
                    } else { 
                        last1.cmp(&last2) == Some(order),
                    }
                }
            },
            None if str1.chars().next_back().unwrap().is_lowercase() && str2.chars().next_back().unwrap().is_uppercase() || str2.chars().next_back().unwrap().is_lowercase() && str1.chars().next_back().unwrap().is_uppercase() => {
                true
            } else { 
                str1.chars().next_back().unwrap().cmp(&str2.chars().next_back().unwrap()),
            }
        };
    };
};