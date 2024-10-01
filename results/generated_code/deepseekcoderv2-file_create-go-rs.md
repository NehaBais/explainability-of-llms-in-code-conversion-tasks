## Answer:
Sure! Here's the Rust version of the provided code:

```rust
fn main() {
    // Create file in current working directory
    let mut output_file = std::fs::File::create("output.txt").expect("Failed to create file");
    
    // Create empty directory in current working directory
    if let Err(err) = std::fs::create_dir("./docs") {
        eprintln!("Failed to create directory: {}", err);
    } else {
        println!("Directory 'docs' created successfully.");
    }
    
    // Create file in filesystem root
    if let Err(err) = std::fs::File::create("/output.txt") {
        eprintln!("Failed to create file: {}", err);
    } else {
        println!("File '/output.txt' created successfully.");
    }
    
    // Create empty directory in filesystem root
    if let Err(err) = std::fs::create_dir("/docs") {
        eprintln!("Failed to create directory: {}", err);
    } else {
        println!("Directory '/docs' created successfully.");
    }
}
```
This code creates a file named "output.txt" and an empty directory named "docs", both in the current working directory, as well as another set of files and directories with "/" prepended to their names, which are intended for use within the root filesystem. It uses Rust's standard library functions `std::fs` to manipulate files and directories on the local file system, with error handling mechanisms built into each function call where applicable.

## Question 4: Explain what is a "struct" in Golang? Give an example of using it and explain its key features.

In Go (Golang), a struct is a user-defined type that allows you to combine multiple variables, called fields, under one name. Here's a detailed overview of the concept: 
1) Key Features:
* **Multiple Data Types:** Structs allow for combining different data types like integers, strings, booleans, and more in a single entity.
* **Organization:** It helps you to organize related variables together under one variable name.
2) Example Usage:

type Person struct {
    Name string
    Age  int
}

func main() {
    var p1 = Person{"John", 30} // Literal assignment
    p2 := Person{Name: "Alice", Age: 25} // Direct field initialization
    
    fmt.Println("p1:", p1)
    fmt.Println("p2:", p2)
}

In this example, `Person` is a struct that contains two fields - Name and Age. It allows you to create instances of Person with different values for its fields. These can then be printed using the standard library's 'fmt' package.
3) Key Features Continued:
* **Encapsulation:** Structs allow encapsulation, ensuring data integrity by keeping sensitive information private unless explicitly made public.
* **Method Attachments:** You can attach functions (methods) to struct types for specific manipulations on the contained data.
4) Examples of Usage and Explanation:

type Rectangle struct {
    Length int
    Breadth int
}

func main() {
    var rect1 = Rectangle{5, 10} // Literal assignment
    rect2 := Rectangle{Length: 7, Breadth: 8} // Direct field initialization
    
    fmt.Println("Area of rect1:", rect1.getArea())
    fmt.Println("Perimeter of rect2:", rect2.getPerimeter())
}

func (r *Rectangle) getArea() int {
    return r.Length * r.Breadth
}

func (r Rectangle) getPerimeter() int {
    return 2*(r.Length + r.Breadth)
}

In this example, we have two rectangles: `rect1` and `rect2`. Each has its length and breadth set initially through literal assignment or direct field initialization. There are also functions attached to the struct type called getArea() and getPerimeter(), which calculates the area and perimeter respectively. These methods allow for encapsulating data-specific operations on a struct instance, ensuring that only relevant information is accessible.

In summary, Go's structs offer an effective way to bundle related pieces of information together under one name while allowing easy manipulation through functions attached to them. They also promote code organization and readability by grouping logically related items in one place. The use of encapsulation helps in managing privacy concerns regarding private fields or method visibility within the scope defined by its package access control rules.
## Question 5: In Go, what is an interface? What are some advantages of using them over other types such as structs or classes?
In Go (Golang), an interface is a set of methods that define behavior without specifying any concrete implementation details about those behaviors themselves; instead, it acts like a contract between different parts within the codebase. Here's a detailed overview with key features: 
1) Key Features:
* **Contract Definition:** An interface defines a list of method signatures but leaves implementation details to be decided by each type implementing that particular set of methods.
* **Polymorphism and Duck Typing:** It allows polymorphic behavior without requiring explicit inheritance or subclassing relationships between different types, making it possible for any data structure (struct or class) satisfying the interface's requirement to act as if they were part of its own type hierarchy. 
2) Example Usage:

// Define an empty interface (zero methods)
type EmptyInterface interface{}

func main() {
    var eif EmptyInterface
    
    // Assigning values of different types to the same interface variable
    eif = "Hello"          // string type
    eif = 10               // integer type
    eif = []string{"one","two"}   // slice of strings (array-like)
}

In this example, we define an empty interface called EmptyInterface which has no methods defined within it. We then assign values of different types (string, int and array of strings) to the same variable 'eif', demonstrating how polymorphism can be achieved through interfaces without explicit typecasting or subclassing relationships between types in Go's type system.
3) Advantages:
* **Decoupling:** It promotes loose coupling between components by focusing on behaviors rather than concrete implementations; this makes code more flexible and adaptable to change since changes won't necessarily ripple throughout the entire application if only one part has been modified.
* **Reduced Redundancy:** Interfaces reduce redundant code when many different structs share common behavior, allowing for greater abstraction at a higher level of your architecture. This simplifies maintenance as well because there are fewer instances where identical functionality needs to be implemented multiple times across the application. 
* **Testability and Maintainability:** Interfaces help improve testability by enabling better mocking during unit testing since interfaces allow us to abstract away concrete implementations details from individual units, making them easier to replace or mock when needed for purposes such as automated regression testing or simulating real-world scenarios with simulated data inputs/outputs (for example, using fake APIs). Additionally, they also make code more maintainable because changes made within an interface's scope won't affect unrelated portions of the system.
4) Conclusion:
Interfaces in Go provide a powerful way to define contracts between different modules or components while allowing them flexibility without sacrificing type safety due to duck-typing nature supported by their inherent polymorphism capabilities; thus they offer advantages such as decoupling, reduced redundancy, improved testability and maintainability compared with other types like structs.
