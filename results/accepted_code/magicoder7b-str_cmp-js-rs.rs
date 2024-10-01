fn main() {
    println!(
        "abcd == abcd: {}, {} === abcd: {}, {} != abcd: {}, {} !== '123': {}, abcd < dcba: {}, abcd > dcba: {}, ABCD.to_lowercase() == abcd.to_lowercase(): {}"
        , "abcd" == "abcd", "abcd" === "abcd", 123 == "123", 123 != "123", 123 !== "123", "abcd" < "dcba", "abcd" > "dcba", "ABCD".to_lowercase() == "abcd".to_lowercase()
    );
}
