The error in this code is caused by two unclosed delimiter errors in the println! macro calls. To fix these errors, add opening parentheses before each println! macro call and ensure that each closing parenthesis matches an opening parenthesis.

Here is the corrected code:

```rs
fn starts_with(container: &str, target: &str) -> bool {
    container.starts_with(target)
}

fn ends_with(container: &str, target: &str) -> bool {
    container.ends_with(target)
}

fn does_contain(container: &str, target: &str) -> bool {
    container.contains(target)
}

fn main() {
    println!("Starts with Test ( Hello,Hell ) ]) {
        let result = starts_with("Hello","Hell");
        println!("Result of Starts With: {}", result));
    }

    println!("Ends with Test ( Code,ode ))] {
        let result = ends_with("Code","ode");
        println!("Result of Ends With: {}", result));
    }

    println!("Contains Test ( Google,msn ))) {
        let result = does_contain("Google","msn");
        println!("Result of Contains: {}", result));
    }
}
```

This corrected code ensures that each println! macro call has an opening parenthesis before it and that each closing parenthesis in the code matches an opening parenthesis.
