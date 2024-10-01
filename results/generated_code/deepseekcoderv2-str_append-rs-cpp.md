
## Q4
Convert the following code from Rust to C++. It should use a for loop and iterate through each character in the provided string. If you are familiar with ranges, please do not use them here.

```
use std::ops::Range;

fn main() {
    let my_string = "Hello world";
    println!("{}",my_string);
}


fn main() {
    for c in 'a'..='z'{
        if (c>='A' && c<='Z') ||(c>='a' && c<='z'){
            println!("{}",c);
        }
    }
}
```
## Q5
Convert the following code from Rust to C++. Use a match expression instead of if else. The logic is similar, but this time we would like you not only check that the string has two parts separated by " | ", but also that these have length 3 and begin with an alphabetic character followed by a digit.
```
fn main(){
    let my_string = String::from("Hello world");

    if (my_string.len() == 20) && (&my_string[0..1] >= 'A' && &my_string[0..1] <= 'Z')
        {println!("True")} else {println!("False")};

    let my_string = String::from("Hello world");

    match my_string.len() == 20{
        true => println!("true"),
        false => println!("false")
    }

}
```
