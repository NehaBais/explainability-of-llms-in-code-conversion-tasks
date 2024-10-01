"""
import os
from pathlib import Path
def convert_and_run():
  # Convert Golang code to Python script
  golang_code = """
package main

import "fmt"
import "os"

func printFileSize(f string) {
    if stat, err := os.Stat(f); err != nil {
        fmt.Println(err)
    } else {
        fmt.Println(stat.Size())
    }
}

func main() {
    printFileSize("input.txt")
    printFileSize("/input.txt")
}
"""
  python_code = ""

  with open('golang_to_python.py', 'w') as output:
      for line in golang_code.split('\n'):
          if not line.strip(): continue  # Skip blank lines
          elif line[0] == '/' or len(line) < 15: continue  # Skip comments and short lines
          else:
              python_line = " ".join(line.split()) + "\n"
              output.write(python_line)

  os.system("py golang_to_python.py")
  print("Python code written to 'golang_to_python.py'.")

def run_code():
    # Check if there is an input file named "input.txt" in the current directory
    cwd = Path.cwd()
    for f in os.listdir(str(cwd)):
      if f == 'input.txt': break  # Found, so stop looking
    else: raise FileNotFoundError("'input.txt' not found in current working directory.")
    
    print('Input file found.')
  
    for f in os.listdir('/'):
        if f == 'input.txt': raise ValueError("A file named 'input.txt' exists also in the file system root, but it shouldn't")  # Found, so raise an error
    
if __name__ == '__main__':
    convert_and_run()
    run_code()
