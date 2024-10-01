const fs = require("fs");
const path = require("path");
const filePath1 = "input.txt";
const filePath2 = "/input.txt";
try {
  const stats1 = fs.statSync(path.join(__dirname, filePath1));
  console.log(`File size of ${filePath1} in bytes: ${stats1.size}`);

  const stats2 = fs.statSync(filePath2);
  console.log(`File size of ${filePath2} in bytes: ${stats2.size}`);
} catch (err) {
  console.error("Error accessing file:", err);
}
