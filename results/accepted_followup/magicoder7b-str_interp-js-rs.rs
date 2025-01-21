const original: &str = "Mary had a X lamb";
const little: &str = "little";

let replaced = format!("{}", original.replace("X", little));

println!("{}", replaced); // Outputs: Mary had a little lamb