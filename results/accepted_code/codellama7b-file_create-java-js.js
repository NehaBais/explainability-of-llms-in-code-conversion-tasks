const fs = require("fs");

// Create empty file in current working directory
try {
  fs.writeFileSync("output.txt", "");
} catch (error) {
  console.log(error);
}

// Create empty file in filesystem root
try {
  fs.writeFileSync("/output.txt", "");
} catch (error) {
  console.log(error);
}

// Create empty directory in current working directory
try {
  fs.mkdirSync("docs");
} catch (error) {
  console.log(error);
}

// Create empty directory in filesystem root
try {
  fs.mkdirSync("/docs");
} catch (error) {
  console.log(error);
}
