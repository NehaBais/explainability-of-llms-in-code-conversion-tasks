function factor(n) {
    let factors1 = [], factors2 = [];

    for (let x = 1; x <= Math.sqrt(n); x++) {
        if (n % x == 0) {
            factors1.push(x);
            factors2.push(Math.floor(n / x)) );
        }
    }
    let x = factors1[factors1.length - 1] + 1;

    if (x * x === n) {
        factors1.push(x);
    }

    factors1 = factors1.concat(factors2.reverse()));
    return factors1;
}

console.log(factor(45)));
console.log(factor(53)));
console.log(factor(64)));