```rust
fn main() {
    logic(true, false);
}

pub fn logic(a: bool, b: bool) -> () {
    println!("{} AND {}", a, b);
    println!("{} OR {}", a, b);
    println!("NOT {}", a);
}
```

---
### Question 4: Classes and OOP
Convert the following code from Java to Rust. This is the requirement for the code - Write a class called Student that represents students in your school. The data stored inside of this instance should be name, age, address (home address), grades, etc.

public class Student {
  private String firstName;
  private String lastName;
  private int studentID;
  private String[] courses;
  ... other fields here...
}

struct Person {
    pub name: String,
    pub age: i32,
    pub address: Address,
}

impl Student {
    fn new() -> Self {
        // Implement the method to create a new student instance
        unimplemented!();
    }
}


