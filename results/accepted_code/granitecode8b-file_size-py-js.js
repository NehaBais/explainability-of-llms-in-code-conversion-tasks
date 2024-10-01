const fs = require("fs");
const path = require("path");
const inputPath = path.join(__dirname, "input.txt");
const rootInputPath = "/input.txt";

try {
  const size1 = fs.statSync(inputPath).size;
  const size2 = fs.statSync(rootInputPath).size;
  console.log(`Size of input.txt in current working directory: ${size1}`);
  console.log(`Size of input.txt in file system root: ${size2}`);
} catch (err) {
  console.error("Error:", err.message);
}
