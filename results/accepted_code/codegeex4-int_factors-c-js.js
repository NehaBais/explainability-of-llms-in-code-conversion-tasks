function factor(num) {
  let factorsList = [];
  for (let divisor = 1; divisor * divisor <= num; divisor++) {
    if (num % divisor !== 0) continue;

    factorsList.push(divisor);
    if (divisor != num / divisor) factorsList.push(num / divisor);
  }

  return factorsList.sort((a, b) => a - b);
}

let numbersToFactor = [2059, 223092870, 3135, 45];

numbersToFactor.forEach((number) => {
  let factors = factor(number);

  console.log(`factors of ${number} are: ` + factors.join(", "));
});
