let mut s = ", World".to_string(); // Convert string literal into a String type
s = format!("Hello {}", s);       // Use the format! macro to prepend "Hello" 
println!("{}", s);                // Print the resulting string