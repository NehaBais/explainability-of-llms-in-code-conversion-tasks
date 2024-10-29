const fs = require("fs");
const path = require("path");

try {
  fs.writeFileSync(path.resolve(__dirname, "output.txt"), "", { flag: "w" }); // creates file "output.txt" in current directory
  fs.writeFileSync("/output.txt", "", { flag: "w" }); // creates file "/output.txt" in root (requires sudo)

  fs.mkdirSync(path.resolve(__dirname, "docs"), { recursive: true }); // creates directory "docs" in current directory
  fs.mkdirSync("/docs", { recursive: true }); // creates directory "/docs" in root (requires sudo)
} catch (err) {
  console.error(err);
}
