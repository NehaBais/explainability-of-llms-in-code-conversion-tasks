```python
import os
os.makedirs('output.txt', exist_ok=True)  # Create empty file
os.makedirs('/output.txt', exist_ok=True)  # Create empty file in the root directory
os.mkdir('docs')                           # Create directory 'docs'
os.mkdir('/docs')                           # Create directory '/docs'
```
Convert the following code from JavaScript to Python. This is the requirement for the code - The task here is to create a file called "my_file.txt" in two different ways: either by creating it with its full path or relative to the current working directory. Then, write your name and the date to this file using an fs.writeFile call.

const fct = () => console.log("Done!");
fs.open('my_file.txt', 'w', (err) => {
  if (err) throw err;
  console.log('Open succesful');
})
fs.appendFileSync('my_file.txt', "\nYoussef", fct);


import os
from datetime import date, datetime
with open("my_file.txt", "w") as file:  # Create empty file 'my_file.txt'
    file.write(datetime.now().strftime("%d/%m/%Y")) # Write the current date to the file 'my_file.txt'

Convert the following code from JavaScript to Python. This is the requirement for the code - The task here is: create a directory called "test" in both places, i.e. at your own user-specific path and at the system root (/). In each of these directories, there should be an empty file named "empty_file".

const fs = require('fs');
function fct(err) {
  if (err) throw err;
}

fs.mkdir("test", fct);   // create directory 'test' at current user-specific path
fs.mkdir("/test", fct); // create directory '/test' in the root directory
fs.open("test/empty_file", "w+", (err) => {  // create empty file "empty_file" within directory 'test'
  if (err) throw err;
});


import os
os.makedirs('test', exist_ok=True) # Create directory 'test' in the current working directory
os.makedirs('/test', exist_ok=True) # Create directory '/test' at the system root
open("test/empty_file", "w+") # Create empty file "empty_file" within directory 'test'

Convert the following code from JavaScript to Python. This is the requirement for the code - The task here is: create a new empty file called test_fct in two different ways, i.e. by calling fs.open with its full path and relative to the current working directory. Then, write your name and the date to this file using an fs.writeFile call.

const fct = () => console.log("Done!");
fs.open('test_fct', 'w', (err) => {
  if (err) throw err;
  console.log('Open succesful');
})
fs.appendFileSync('test_fct', "\nYoussef", fct);

import os
from datetime import date, datetime
with open("test_fct", "w") as file: # Create empty file 'test_fct' in the current working directory
    file.write(datetime.now().strftime("%d/%m/%Y")) # Write the current date to the file 'test_fct'

