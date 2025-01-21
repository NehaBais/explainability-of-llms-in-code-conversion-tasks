const fs = require('fs');
const path = require('path');

function create(directory) {
    // Create output.txt file and write some content just for testing purposes, as actual file size will always remain 0 bytes.
    fs.writeFileSync(
        path.join(directory, "output.txt")), 
         'Test content goes here');

    // Creates an empty directory named 
'docs'.
    fs.mkdirSync(path.join(directory, "docs")));
}

create("."); 
create("/");