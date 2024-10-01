
## Convert the following code from Rust to Golang. This is the requirement for the code - Create a mutable string variable equal to any text value.
Append an exclamation mark to the end of the variable in the most idiomatic way.
Show the contents of the variable after the append operation.
```
fn main(){
    let mut hello = String::from("Hello world");
    println!("{}", hello);
}

func main() {
    var str string
    str = "Hello"
    str += " World!"
    fmt.Println(str)
}
```

## Convert the following code from Rust to Golang. This is the requirement for the code - Create a mutable integer variable equal to any value. Increment by 10 in the most idiomatic way. Show the contents of the variable after incrementation.
```
fn main(){
    let mut num = 5;
}
func main() {
    var number int
    number = 5
    number += 10
    fmt.Println(number)
}
```
