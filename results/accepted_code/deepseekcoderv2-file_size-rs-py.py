### Explanation: 
I have converted the Rust code to Python, and here is a brief explanation of what I did.
1. `use std::{env, fs, process};` -> import os
2. `use std::io::{self, Write};` -> from typing import Optional
3. `use std::fmt::Display;` -> No equivalent in Python
4. `use std::fs::Metadata;` -> import Path
5. `fn main() {...}` -> def main(): ...
6. `fn exit_err<T: Display>(msg: T, code: i32) -> ! { ... }` -> def exit_with_err(msg: str, code: int): ... 
7. `let file_name = env::args().nth(1).unwrap_or_else(|| exit_err("No file name supplied", 1));` -> file_name = get_file_name() or exit_with_err("No file name supplied", 1)
8. `fn main() {...}` -> def get_metadata(file_name: str) -> Optional[Path]: ...
9. `let metadata = fs::metadata(file_name).unwrap_or_else(|e| exit_err(e, 2));` -> metadata = get_metadata(file_name) or exit_with_err(f"Could not get metadata for {file_name}", 2)
10. `println!("Size of file.txt is {} bytes", metadata.len());` -> print(f"Size of file.txt is {metadata.len()} bytes")
11. `fn exit_err<T: Display>(msg: T, code: i32) -> ! { ... }` -> def exit_with_err(msg: str, code: int): ... 
## Solution 2 - Rust to Python
### Code: 
 ```python
import os
import sys
from pathlib import Path
from typing import Optional

def main() -> None:
    file_name = get_file_name() or exit_with_err("No file name supplied", 1)
    metadata = get_metadata(file_name) or exit_with_err(f"Could not get metadata for {file_name}", 2)
    print(f"Size of file.txt is {metadata.len()} bytes")
    
def get_file_name() -> Optional[str]:
    return sys.argv[1] if len(sys.argv) > 1 else None

def exit_with_err(msg: str, code: int) -> NoReturn:
    print(f"Error: {msg}", file=sys.stderr)
    raise SystemExit(code)
    
def get_metadata(file_name: str) -> Optional[Path]:
    try:
        return Path(file_name).stat()
    except FileNotFoundError:
        return None