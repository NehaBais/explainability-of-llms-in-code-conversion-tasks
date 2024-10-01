let original: &str = "Mary had a X lamb";
let little: &str = "little";

let replaced = format!("{}", original.replace("X", little));

println!("{}", replaced); // Outputs: Mary had a little lamb