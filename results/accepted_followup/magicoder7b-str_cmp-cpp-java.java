static void demoCompare(double a, double b) {
    System.out.println(
        a
            + " and "
            + b
            + " are "
            + ((Double.compare(a, b) != 0) ? "" : "not ")
            + "numerically inequal.");
}