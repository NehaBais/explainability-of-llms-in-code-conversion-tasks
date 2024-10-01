function compare(stringA, stringB) {
  let result = [
    STREQ(stringA, stringB),
    STRNE(stringA, stringB),
    STRGT(stringA, stringB),
    STRLT(stringA, stringB),
    STRGE(stringA, stringB),
    STRLE(stringA, stringB),
  ];
  console.log(
    `${stringA} ${result[0]} ${result[1]} ${result[2]} ${result[3]} ${result[4]} ${result[5]} ${stringB}`,
  );
}
function comparecase(stringA, stringB) {
  let result = [
    STRCEQ(stringA, stringB),
    STRCNE(stringA, stringB),
    STRCGT(stringA, stringB),
    STRCLT(stringA, stringB),
    STRCGE(stringA, stringB),
    STRCLE(stringA, stringB),
  ];
  console.log(
    `${stringA} ${result[0]} ${result[1]} ${result[2]} ${result[3]} ${result[4]} ${result[5]} ${stringB} ignoring case`,
  );
}
let main = function (args) {
  compare("ball", "bell");
  comparecase("ball", "bell");
  return 0;
};
