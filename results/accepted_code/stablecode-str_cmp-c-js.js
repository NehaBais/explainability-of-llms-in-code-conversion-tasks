function compare(a, b) {
  console.log(`${a} \t\t ${b}`);
  console.log("   eq , ne , gt , lt , ge , le");
  console.log(
    `${STREQ(a, b)} , ${STRNE(a, b)} , ${STRGT(a, b)} , ${STRLT(a, b)} , ${STRGE(a, b)} , ${STRLE(a, b)}`,
  );
}

function compareCaseInsensitive(a, b) {
  console.log(`${a} \t\t ${b} ignoring case`);
  console.log("   eq , ne , gt , lt , ge , le");
  console.log(
    `${STRCEQ(a, b)} , ${STRCNE(a, b)} , ${STRCGT(a, b)} , ${STRCLT(a, b)} , ${STRCGE(a, b)} , ${STRCLE(a, b)}`,
  );
}

// Example usage:
const a = "Hello";
const b = "world!";

compare(a, b);
compareCaseInsensitive(a, b);
