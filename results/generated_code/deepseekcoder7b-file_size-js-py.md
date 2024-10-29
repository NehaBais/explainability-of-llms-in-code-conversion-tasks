You can use Python's built-in `os` module to solve this problem, which provides a way of using operating system dependent functionality like accessing the size of a file in bytes. Here is how you would do it:

```python
import os

# for current directory 
file_size = os.path.getsize('input.txt')
print(f'Size of input.txt (in bytes): {file_size}')

# for the file system root
root_directory_size = os.path.getsize('/input.txt')
print(f'Size of /input.txt (in bytes): {root_directory_size}')
```

Please replace '/input.txt' with your actual filename and its path. If the file is not in the root directory, you might need to use a different function or method depending on how you want to find it. 

The os module can provide some functionalities like checking whether the file exists before trying to get its size etc. So it's worthwhile to explore further if more functionality is required. Also note that Python uses forward slashes (/) for directories and files, while Windows uses backslashes (\). You should use either one depending on your operating system.

