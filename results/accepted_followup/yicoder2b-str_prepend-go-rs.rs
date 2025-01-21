let mut s = "world!"; 
s = format!("Hello, {}", s); // Prepend the string with the text "Hello, " and assign the result to 's'.
println!("{}", s); // Prints "Hello, world!"