Error: `Error` is not found in `fs`. 
To fix this, import the necessary error types from the standard library like so: `use std::error::Error;`.
```rs
use std::{error::Error, fmt::Error};
fn create_dir_all(path: &str) -> Result<(), Box<dyn Error>> {
 fs::create_dir_all(path)?;
 Ok(())
}
```

