Error: Cannot find value `A` in this scope
Fix: Rename local variable `A` to avoid shadowing outer `A`.
Corrected Code:

```rs
fn print_logic(a: bool, b: bool) {
    println!("A and b is {}", A && b);
    println!("A or b is {}", A || b);
    println!("not a is {}", !A);
}

fn main() {
    let local_A = true;
    let b = false;
    print_logic(local_A, b);
}
```
