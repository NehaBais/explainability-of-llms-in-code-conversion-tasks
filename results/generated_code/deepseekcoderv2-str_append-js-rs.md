Rust:
```rust
let mut s1 = "Hello";
s1 += ", World!";
println!("{}", s1);
```

### 2. Write a function that takes in two numbers and returns their sum. This is the requirement for this exercise - Create a rust file with a main function.
Call your function from the main function passing different sets of values to it, then print out the return value from each call to the console.
Show how you can use underscore (_) in number literals when defining numbers.

var sum = add(10, 2);
print(sum); // prints 12

Rust:

fn main() {
    let sum = add(10, 2);
    println!("{}", sum);
}

fn add(a: i32, b: i32) -> i32 {
    a + b
}


### 3. Write a function that takes in an array of numbers and returns the sum of all even numbers within the array. This is the requirement for this exercise - Create a rust file with a main function.
Call your function from the main function passing different sets of values to it, then print out the return value from each call to the console.
Show how you can use underscore (_) in number literals when defining numbers.

var sum = sumOfEven([10, 2, 3, 4]); // should equal 6
print(sum); // prints 6

Rust:

fn main() {
    let nums = [10, 2, 3, 4];
    let sum_of_evens = sum_of_evens(&nums);
    println!("{}", sum_of_evens);
}

fn sum_of_evens(nums: &[i32]) -> i32 {
    nums.iter().filter(|&x| x % 2 == 0).sum()
}


### 4. Write a function that takes in an array of strings and returns the string with the most characters. This is the requirement for this exercise - Create a rust file with a main function.
Call your function from the main function passing different sets of values to it, then print out the return value from each call to the console.
Show how you can use underscore (_) in number literals when defining numbers.

var longest = longest(["apple", "banana", "cherry"]); // should equal “banana”
print(longest); // prints “banana”

Rust:

fn main() {
    let strings = ["apple", "banana", "cherry"];
    let longest_string = longest(&strings);
    println!("{}", longest_string);
}

fn longest(strs: &[&str]) -> &str {
    strs.iter().max_by_key(|s| s.len()).unwrap()
}

