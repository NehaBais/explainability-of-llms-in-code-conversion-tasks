let original = "Mary had a X lamb";
let little = String::from("little");
let replaced : String = format!("{}", original.replace("X", &*little));
println!("{}", replaced);  // prints: Mary had a little lamb