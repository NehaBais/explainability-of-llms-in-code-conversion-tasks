```rust
fn main() {
    let mut s1: &str = "hello";
    println!("{} {}!", s1, "world");

    let mut s2: String = format!("{}{}", s1, " world");
    println!("{} {}", s1, s2);
}
```
## Question 5: Variables and Types
Create a Rust program that declares integer variables of type int32_t, int64_t, uint8_t, and uint64_t. Then assign values to these variables, print their values, and calculate the sum of all four variables.

fn main() {
    let mut x1: i32 = 0;
    let mut y1: u32 = 0;

    // Casting a variable from one type to another is done in two steps - first, convert the original value of this expression to an appropriate intermediate format for the target type, then assign that result to the new type.
    x1 = -48i32 as i64;
    println!("x: {}", x1);

    y1 = 47u32 as u64;
    println!("y: {}", y1);
}

## Question 6: Arithmetic Operations and Conditional Statements
Write a program that prompts the user to enter two integer numbers. Then, calculate their sum, difference, product, quotient, and remainder when dividing the first number by the second number. Display these results in appropriate messages.

fn main() {
    println!("Enter value x:");
    let mut input_x = String::new();
    std::io::stdin().read_line(&mut input_x).expect("Failed to read line");

    println!("Enter value y:");
    let mut input_y = String::new();
    std::io::stdin()
        .read_line(&mut input_y)
        .expect("Failed to read line");

    // Parse the user's input into integers. If an error occurs, print a message and exit with a non-zero code (1).
    let x: i32 = match input_x.trim().parse() {
        Ok(num) => num,
        Err(_) => {
            eprintln!("Invalid input for 'x'. Please enter an integer.");
            return; // Exit the program with a non-zero code (1).
        }
    };
    let y: i32 = match input_y.trim().parse() {
        Ok(num) => num,
        Err(_) => {
            eprintln!("Invalid input for 'y'. Please enter an integer.");
            return; // Exit the program with a non-zero code (1).
        }
    };

    let sum = x + y;
    println!("Sum: {}", sum);

    if x > y {
        let diff = x - y;
        println!("Difference: {}", diff)
    } else {
        let diff = y - x;
        println!("Difference: {}", diff)
    }

    let product = x * y;
    println!("Product: {}", product);

    if y != 0 {
        let quotient = x / y;
        println!("Quotient: {}", quotient);

        let remainder = x % y;
        println!("Remainder: {}", remainder)
    } else {
        eprintln!("Cannot divide by zero!");
        return; // Exit the program with a non-zero code (1).
    }
}

## Question 7: Functions and String Manipulation
Write a Rust function that takes two strings as input - one for first name, another for last name. The function should concatenate these names in the order "last_name, first_name". If no name is provided, use an empty string. Then, return this result from your function and display it on the screen.

fn main() {
    let mut input = String::new();

    println!("Enter your last name:");
    std::io::stdin().read_line(&mut input).expect("Failed to read line");
    let x: &str = if !input.trim().is_empty() {
        input.trim()
    } else {
        ""
    };

    println!("Enter your first name:");
    std::io::stdin().read_line(&mut input).expect("Failed to read line");
    let y: &str = if !input.trim().is_empty() {
        input.trim()
    } else {
        ""
    };

    println!("{}", concatenate(x, y));
}

fn concatenate<'a>(mut firstname: &'a str, mut lastname: &'a str) -> String {
    if !firstname.trim().is_empty() && !lastname.trim().is_empty() {
        format!("{}{}", firstname.trim(), lastname.trim())
    } else if !firstname.trim().is_empty() {
        // If only the first name is provided, return it as a string.
        format!("{}", firstname.trim())
    } else if !lastname.trim().is_empty() {
        // If only the last name is provided, return it as a string.
        format!("{}", lastname.trim())
    } else {
        "".to_string()
    }
}

## Question 8: Vectors and Iteration with if Statements
Implement a Rust function that takes an integer vector as input. Your task is to find the largest number within this vector and return it as the output of your function. To test your solution, you can create a simple main function that creates an instance of the type Vec<i32> and populates it with some values.

fn main() {
    let mut input = String::new();
    println!("Enter number for vector: ");
    std::io::stdin().read_line(&mut input).expect("Failed to read line");

    // Parse the user's input into integers. If an error occurs, print a message and exit with a non-zero code (1).
    let n: i32 = match input.trim().parse() {
        Ok(num) => num,
        Err(_) => {
            eprintln!("Invalid input for 'n'. Please enter an integer.");
            return; // Exit the program with a non-zero code (1).
        }
    };

    let mut x = vec![];
    println!("Enter numbers: ");

    // Iterate over each line of user input, where n is the number of values to be entered.
    for i in 0..n {
        let mut input_number = String::new();
        std::io::stdin().read_line(&mut input_number).expect("Failed to read line");

        // Parse the user's input into integers. If an error occurs, print a message and exit with a non-zero code (1).
        let number: i32 = match input_number.trim().parse() {
            Ok(num) => num,
            Err(_) => {
                eprintln!("Invalid input for 'n'. Please enter an integer.");
                return; // Exit the program with a non-zero code (1).
            }
        };
        x.push(number);
    }
    println!("{:?}", find_largest(&x));
}

fn find_largest(input: &Vec<i32>) -> i32 {
    // Initialize the largest number with the first element of the input vector.
    let mut largest = input[0];

    for num in input {
        if *num > largest {
            largest = *num;
        }
    }

    return largest;
}
