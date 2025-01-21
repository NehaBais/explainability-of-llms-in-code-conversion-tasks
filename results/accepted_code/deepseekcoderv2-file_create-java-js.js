const fs = require("fs");
const path = require("path");

// Create output.txt in the current working directory
try {
  fs.openSync(path.join(__dirname, "output.txt"), "w");
} catch (err) {
  console.error(err);
}

// Create output.txt in the root of the filesystem
try {
  fs.openSync("/output.txt", "w");
} catch (err) {
  console.error(err);
}

// Create docs directory in the current working directory
try {
  if (!fs.existsSync(path.join(__dirname, "docs"))) {
    fs.mkdirSync(path.join(__dirname, "docs"));
  }
} catch (err) {
  console.error(err);
}

// Create docs directory in the root of the filesystem
try {
  if (!fs.existsSync("/docs")) {
    fs.mkdirSync("/docs");
  }
} catch (err) {
  console.error(err);
}
