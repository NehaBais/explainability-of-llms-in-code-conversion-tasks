function factors(n) {
    const factorSet = new Set<number | bigint>();
    factorSet.add(n);
    factorSet.add(1);
    
    // Start from n-1 and go down to Math.floor(Math.sqrt(n))
    for (let test = BigInt(n) - 1; test >= BigInt(Math.floor(Math.sqrt(Number(n))); test--) {
        if (Number(n) % Number(test) === 0) {
            factorSet.add(test);
            factorSet.add(BigInt(n / test));
        }
    }
    
    // Convert the Set to an ordered array and then convert it back to a Set for uniqueness
    const factors = Array.from(factorSet).sort((a, b) => Number(a) - Number(b));
    return new Set(factors);
}