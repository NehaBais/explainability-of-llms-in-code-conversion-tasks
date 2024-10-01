This problem can be solved in several programming languages. Here are some examples with comments explaining the code:

For Python:
```python
import os

def mkdirp(path):
    # Check if directory exists, if not then create it. 
    if not os.path.isdir(path):
        os.makedirs(path) #makes new directories as needed by the path
    else:                  
        print('Directory already exists')
```
For JavaScript (Node.js):
```javascript
const fs = require('fs');

function mkdirp(path){
    // Check if directory exists, if not then create it.
    if (!fs.existsSync(path)){
        try {
            fs.mkdirSync(path, { recursive: true }); 
        } catch (error) {
           console.error(`Error creating path '${path}' ${error}`);
        }
    } else {
        console.log('Directory already exists');
    }   
}
```
For C++:
```cpp
#include <cstdlib>
#include <sys/stat.h>
#include <unistd.h>

void mkdirp(const char *path) {
    // Check if directory exists, if not then create it.
    struct stat sb;
    if (!stat(path, &sb)){
        return;  
    } else { 
        if ((mkdirp(dirname(path))) < 0){
            perror("Couldn't create parent directory of");
            return;
        }
    }
    // Create the directory itself.
    if (mkdir(path, sb.st_mode) < 0) {
        perror("Couldn't create");
    }  
}
```
Please note that cross-platform code isn't very portable as you have to consider various factors like operating system, version of the system etc.
