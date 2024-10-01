Rust:
fn main() {
    let s = String::from("hello");
    println!("{:?}", s); // {:?} is the debug representation of a value
    
    let s1 = format!("{} {}", s, "world");
    println!("{}", s1);
}

Python:
```python
def main():
    s = "hello"
    print(s)

    s1 = s + " world" # In Python, strings are immutable and cannot be changed in-place. 
    # A new string object is created with the concatenation.
    print(s1)
```
