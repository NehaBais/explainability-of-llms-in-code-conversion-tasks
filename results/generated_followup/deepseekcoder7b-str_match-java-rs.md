The errors are due to incorrect syntax used for comparison, unwrap_or usage is not correct, and mismatch of types in while condition.

Corrected code:
```rs
fn main() {
    // Starting with "ab"
    let str1 = String::from("abcd");
    println!("{}", str1.starts_with("ab"));  //returns true

    // Ending with "zn"
    println!("{}", str1.ends_with("zn"));  //returns false

    // Containing "bb"
    let str2 = String::from("abab");
    if !str2.contains("bb") {
        println!("true");  
    } else{
        println!("false");
    };

    // Containing "ab"
    if !str2.contains("ab") {
        println!("false"); 
    }else{
        println!("true");
    };

    let mut loc = 0;
    while loc != -1 {
      loc = str2[loc..].find(&"ab").unwrap_or(-1);
      if loc != -1 {
          println!("Found at position: {}", loc);
          loc += 1;
      } 
   }
}
``` 

In the corrected code, I have fixed the error by replacing `loc 0` with `let mut loc = 0`. For the if-else block inside while loop, we cannot compare directly as expected in Rust, instead using 'if' statement to check whether the string contains "ab" or not. In addition, unwrap_or is used correctly which returns -1 when nothing was found and it matches with the initial value of loc variable.

