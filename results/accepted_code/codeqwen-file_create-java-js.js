const fs = require("fs");
const path = require("path");

// Create a new empty file in the current working directory
try {
  fs.writeFileSync(path.join(__dirname, "output.txt"), "");
} catch (err) {
  console.error(err);
}

// Create a new empty file in the root of the filesystem
try {
  fs.writeFileSync("/output.txt", "");
} catch (err) {
  console.error(err);
}

// Create an empty directory in the current working directory
try {
  fs.mkdirSync("docs");
} catch (err) {
  console.error(err);
}

// Create an empty directory in the root of the filesystem
try {
  fs.mkdirSync("/docs");
} catch (err) {
  console.error(err);
}
