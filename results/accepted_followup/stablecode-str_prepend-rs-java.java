class Main {
    record Person(String name);

    public static void main(String[] args) {
        Person person = new Person("John Doe");
        System.out.println("Hello, " + person.name() + "!"));
    }
}