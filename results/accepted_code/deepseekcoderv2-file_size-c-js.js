const fs = require("fs");
const path = "/path/to/file"; // Replace with your file's path

// Check for input.txt in current directory
try {
  const stats = fs.statSync(path);
  console.log("File size:", stats.size, "bytes");
} catch (err) {
  console.error("Error checking file size:", err.message);
}

// Check for input.txt in the root directory
try {
  const stats = fs.statSync("/input.txt");
  console.log("File size:", stats.size, "bytes");
} catch (err) {
  console.error("Error checking file size:", err.message);
}
