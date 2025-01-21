fn main() {
    println!("{}", "abcd" == "abcd"); // true
    println!("{}", 123 == "123"); // false (since they are different types)

    let lower_abcd = "ABCD".to_lowercase();
    let lower_abcd_expected = "abcd".to_lowercase();

    println!("{}", lower_abcd == lower_abcd_expected); // true
    println!("{}", "abcd" < "dcba"); // true
    println!("{}", "abcd" > "dcba"); // false
}
