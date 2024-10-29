const fs = require("fs");
const rootDir = "/"; // for unix-like systems use '/'

try {
  // create an empty file "output.txt" at current directory
  fs.openSync("output.txt", "w");
} catch (err) {
  console.log(`Error: ${err}`);
}

try {
  // create an empty file "output.txt" in the root of filesystem
  fs.openSync(rootDir + "output.txt", "w");
} catch (err) {
  console.log(`Error: ${err}`);
}

// Create directory called docs at current directory
try {
  fs.mkdirSync("docs");
} catch (err) {
  console.log(`Error: ${err}`);
}

// Create directory called docs in root of the filesystem
try {
  fs.mkdirSync(rootDir + "docs");
} catch (err) {
  console.log(`Error: ${err}`);
}
