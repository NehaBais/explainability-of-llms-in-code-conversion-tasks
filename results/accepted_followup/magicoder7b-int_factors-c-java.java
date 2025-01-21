public static Factors getFactors(Factors factors, int num) {
    int list[] = new int[301];
    int ix = 0;
    for (int dvsr = 1; dvsr * dvsr < num; dvsr++) {
        if (num % dvsr != 0) continue;
        
        factors.addFactor(dvsr);
        list[ix++] = num / dvsr;
    }
    
    if ((dvsr * dvsr) == num) {
        factors.addFactor(dvsr);
    }
    
    return factors;
}