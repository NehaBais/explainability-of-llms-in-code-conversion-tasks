const fs = require("fs");
const path = require("path");
// Create a new empty file called "output.txt" of size 0 bytes in the current working directory.
fs.writeFileSync(path.join(__dirname, "output.txt"), "");
// Create a new empty directory called "docs" in the filesystem root.
fs.mkdirSync(path.join("/", "docs"));
