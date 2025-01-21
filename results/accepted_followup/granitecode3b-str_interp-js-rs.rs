const original = "Mary had a X lamb";
const little = "little";
const replaced = original.replace("X", little); // Does not change the original string
println!("{}", replaced); // Output: Mary had a little lamb