const fs = require("fs");
const path = require("path");

function mkdirP(dirPath) {
  try {
    // Check if directory exists.
    if (!fs.existsSync(dirPath)) {
      // Create each non-existent parent dir, including the final one.
      fs.mkdirSync(path.dirname(dirPath), { recursive: true });
    }
    console.log(`Directory created successfully at ${dirPath}`);
  } catch (err) {
    console.error("Error creating directory:", err);
  }
}

// Example usage:
mkdirP("./path/to/dir");
