let original = "Mary had a X lamb";
let little = "little";
let replaced = original.replace("X", little); // Does not change the original string
println!("{}", replaced); // Output: Mary had a little lamb