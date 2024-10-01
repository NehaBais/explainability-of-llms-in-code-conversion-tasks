function main() {
  console.log(`Mary had a ${name} lamb`, "Mary");
  // You can specify order
  console.log(`${name} had a ${adj}`, (name = "Mary"), (adj = "little"));
  // Or named arguments if you prefer
  console.log(`{name} had a ${adj} lamb`, (name = "Mary"), (adj = "big"));
}
