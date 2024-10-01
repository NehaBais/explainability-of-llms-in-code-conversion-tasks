const fs = require("fs");

(async () => {
  try {
    const fileA = new File("file.txt");
    console.log(`${fileA.length} B`);
    const fileB = new File("/file.txt");
    console.log(`${fileB.length} B`);
  } catch (error) {
    console.error(error);
  }
})();
