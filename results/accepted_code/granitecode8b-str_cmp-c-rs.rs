extern crate alloc;
use alloc::string::String;
fn main() {
    let inputs = vec!["ball", "bell", "ball", "ball", "YUP", "YEP"];
    let expected_outputs = vec![
        "	eq , ne , gt , lt , ge , le",
        "ball 1 0 0 0 1 1 ball",
        "ball 1 0 0 0 1 1 ball ignoring case",
        "YUP 0 1 1 0 1 0 YEP",
        "YUP 0 1 0 1 0 1 yep",
        "YUP 0 1 1 0 1 0 YEP ignoring case",
        "YUP 0 1 0 1 0 1 yep ignoring case",
        "bell 0 1 0 1 0 1 ball",
        "bell 0 1 0 1 0 1 ball ignoring case",
        "BALL 0 1 1 0 1 0 BALL",
        "BALL 1 0 0 0 1 1 ball",
        "BALL 1 0 0 0 1 1 ball ignoring case",
        "BELL 0 1 0 1 0 1 bell",
        "BELL 0 1 0 1 0 1 bell ignoring case",
    ];
    for (input, expected_output) in inputs.iter().zip(expected_outputs.iter()) {
        assert_eq!(compare_strings(input, input), *expected_output);
    }
}
fn compare_strings(str1: &str, str2: &str) -> String {
    let eq = if str1 == str2 { "1" } else { "0" };
    let ne = if str1 != str2 { "1" } else { "0" };
    let gt = if str1 > str2 { "1" } else { "0" };
    let lt = if str1 < str2 { "1" } else { "0" };
    let ge = if str1 >= str2 { "1" } else { "0" };
    let le = if str1 <= str2 { "1" } else { "0" };
    format!("{} {} {} {} {} {}", eq, ne, gt, lt, ge, le)
}
fn compare_strings_case_insensitive(str1: &str, str2: &str) -> String {
    let eq = if str1.to_lowercase() == str2.to_lowercase() {
        "1"
    } else {
        "0"
    };
    let ne = if str1.to_lowercase() != str2.to_lowercase() {
        "1"
    } else {
        "0"
    };
    let gt = if str1.to_lowercase() > str2.to_lowercase() {
        "1"
    } else {
        "0"
    };
    let lt = if str1.to_lowercase() < str2.to_lowercase() {
        "1"
    } else {
        "0"
    };
    let ge = if str1.to_lowercase() >= str2.to_lowercase() {
        "1"
    } else {
        "0"
    };
    let le = if str1.to_lowercase() <= str2.to_lowercase() {
        "1"
    } else {
        "0"
    };
    format!("{} {} {} {} {} {}", eq, ne, gt, lt, ge, le)
}
