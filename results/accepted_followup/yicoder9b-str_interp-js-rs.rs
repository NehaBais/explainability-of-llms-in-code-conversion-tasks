const ORIGINAL: &str = "Mary had a X lamb";
static LITTLE: &str = "little";
let replaced : String = format!("{}", ORIGINAL.replace("X", LITTLE));
println!("{}", replaced);  // prints: Mary had a little lamb