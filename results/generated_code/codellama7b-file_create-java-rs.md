
Here's the Rust equivalent of the Java code:

```
use std::fs;
use std::io::Error;

fn main() -> Result<(), Error> {
    fs::File::create("output.txt")?;
    fs::File::create(format!("{}{}", File::separator(), "output.txt"))?;
    fs::DirBuilder::new().recursive(true).create("docs")?;
    fs::DirBuilder::new().recursive(true).create(format!("{}{}", File::separator(), "docs"))?;
    Ok(())
}
```
Note that this code creates two files and two directories, one in the current working directory and another at the root of the file system. The `File` and `DirBuilder` structs from the Rust standard library are used to create files and directories respectively. The `format!()` macro is used to concatenate strings.

Also note that this code uses the `?` operator to handle errors, which allows us to write more concise and readable code.
