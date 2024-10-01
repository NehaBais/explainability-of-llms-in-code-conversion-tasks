// For current working directory
const fs = require("fs");
try {
  if (fs.existsSync("docs/input.txt")) {
    console.log("File exists in the current directory");
  } else {
    console.log("File does not exist in the current directory");
  }
} catch (err) {
  console.error(err);
}

// For filesystem root
try {
  if (fs.existsSync("/docs/input.txt")) {
    console.log("File exists at filesystem root");
  } else {
    console.log("File does not exist at filesystem root");
  }
} catch (err) {
  console.error(err);
}
