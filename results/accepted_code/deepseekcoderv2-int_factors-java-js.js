function factors(n) {
    const factorSet = new Set<number>();
    factorSet.add(n);
    factorSet.add(1);
    
    // Start from n-1 and go down to Math.sqrt(n)
    for (let test = n - 1; test >= Math.sqrt(n); test--) {
        if (n % test === 0) {
            factorSet.add(test);
            factorSet.add(n / test);
        }
    }
    
    // Convert the Set to an ordered array and then convert it back to a Set for uniqueness
    const factors = Array.from(factorSet).sort((a, b) => a - b);
    return new Set(factors);
}