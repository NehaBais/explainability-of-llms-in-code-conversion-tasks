public static void printPrimes(int limit) {
    for (int i = 2; i <= limit; i++) {
        boolean isPrime = true;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            System.out.println(i);
        }
    }
}