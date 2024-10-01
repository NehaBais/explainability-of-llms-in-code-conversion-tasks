try {
  fs.writeFileSync("output.txt", "");
  fs.writeFileSync("/output.txt", "");
  fs.mkdirSync("docs");
  fs.mkdirSync("/docs");
} catch (e) {
  console.error(e.message);
}
