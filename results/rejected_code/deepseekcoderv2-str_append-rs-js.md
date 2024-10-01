
## Q4
Convert the following code from Rust to JavaScript.
This is the requirement for the code - Create a variable with text value, create another variable containing a number and concatenate them in most idiomatic way.
Show the result of concatenation.

```
fn main() {
    let mut hello = String::from("Hello world");
    hello.push_str("!!!!!");
    println!("{}",hello);
}
```

## Q5
Convert the following code from Rust to JavaScript.
This is the requirement for the code - Create an array with 3 elements, and add one more element at the end of it in most idiomatic way. Then show that new length of the array.

```
fn main(){
    let arr = [10;5];
    println!("{}",arr[4]);
}

fn main(){
    let mut arr: [i32; 6] = [0; 5];
    
    for i in 0..arr.len() {
        if (i == 0) {
            continue;
        }
        
        arr[i] = i as i32 + 1;
    }
    println!("{}", arr[5]);
}
```
