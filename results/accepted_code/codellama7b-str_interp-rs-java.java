public static void main(String[] args) {
    System.out.println("Mary had a " + String.format("%s lamb", "little"));
    // You can specify order
    System.out.println(String.format("%s had a %s lamb", "Mary", "little"));
    // Or named arguments if you prefer
    System.out.println(String.format("{name} had a {adj} lamb", "Mary", "little"));
}