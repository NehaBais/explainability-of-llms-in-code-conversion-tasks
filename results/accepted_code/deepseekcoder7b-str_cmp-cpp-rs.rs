fn demo_compare<T: std::cmp::PartialEq + std::fmt::Debug + std::cmp::PartialOrd>(a: &T, b: &T, semantically: &str) {
    println!("{} and {} are {}exactly equal.", a, b, if *a == *b {"not "});
    
    println!("{} and {} are {}inequal.", a, b, if *a != *b {"not "});
  
    println!("{} is {}ordered before {}.", a, if *a < *b {"not "} else {"un"}, b);
  
    println!("{} is {}ordered after {}.", a, if *a > *b {"not "} else {"un"}, b);
}
  
fn main() {
    let args: Vec<String> = std::env::args().collect();
    let a = &args.get(1).unwrap_or(&"1.2.Foo".to_string());
    let b = &args.get(2).unwrap_or(&"1.3.Bar".to<｜begin▁of▁sentence｜>tring());
    
    // Case-sensitive comparisons.
    demo_compare(&a, &b, "lexically");
  
    // Case-insensitive comparisons by creating a new string with the characters in lowercase.
    let lowercased_a = &a.chars().map(|c| c.to_ascii_lowercase()).collect::<String>();
    let lowercased_b = &b.chars().map(|c| c.to_ascii_lowercase()).collect::<String>();
    
    demo_compare(&lowercased_a, &lowercased_b, "lexically");
  
    // Numeric comparisons
    let numA: f64 = match a.parse() { Ok(n) => n, Err(_) => 0f64 };
    let numB: f64 = match b.parse() { Ok(n) => n, Err(_) => 0f64 };
    
    demo_compare(&numA, &numB, "numerically");
}