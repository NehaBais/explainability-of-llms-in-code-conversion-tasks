fn main() {
    // Comparing two strings for exact equality
    let str1 = "abcd";
    let str2 = "abcd";
    println!("{}", str1 == str2); // true

    // Comparing two strings for inequality (the inverse of exact equality)
    let str3 = "dcba";
    println!("{}", str1 != str3); // true

    // Comparing two strings to see if one is lexically ordered before the other
    println!("{}", str1 < str3); // true

    // Comparing two strings to see if one is lexically ordered after the other
    println!("{}", str1 > str3); // false

    // Case insensitive comparison
    let str4 = "ABCD";
    let str5 = "abcd";
    println!("{}", str4.to_lowercase() == str5.to_lowercase()); // true

    // Comparing numeric strings lexically (treated as text)
    let num_str1 = "123";
    let num_str2 = "123";
    println!("{}", num_str1 == num_str2); // true

    // Comparing different types of strings and numeric strings
    let str6 = "123";
    let str7 = "123";
    println!("{}", str6 == str7); // true (numeric strings are equal)
    println!("{}", 123 == str7.parse::<i32>().unwrap()); // true (numeric comparison with parsed numeric string)
    println!("{}", 123 != str7.parse::<i32>().unwrap()); // false (numeric comparison with parsed numeric string)
}