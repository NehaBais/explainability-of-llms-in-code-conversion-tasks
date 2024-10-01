Here's the converted Python code:
```
import os
import sys
def main():
 file_path = sys.argv[1]
 try:
  metadata = os.stat(file_path)
  print("Size of {} bytes".format(metadata.st_size))
 except FileNotFoundError as e:
  print("Error: File not found")
 except OSError as e:
  print("Error:", e)
```
Note that the Rust code uses `std::fs::metadata` to get metadata, which requires the `std` feature to be enabled. In Python, we can use the `os` module to achieve the same result. The `os.stat()` function returns a `stat_result` object, which has a `.st_size` attribute that contains the file size in bytes.

