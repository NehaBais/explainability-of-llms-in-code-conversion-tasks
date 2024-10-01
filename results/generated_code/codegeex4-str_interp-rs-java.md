```java
public class Main {
    public static void main(String[] args) {
        System.out.println("Mary had a " + getLambType() + " lamb.");
        // You can specify order
        System.out.println(getName(1) + " had a " + getName(0) + " lamb");
        // Or named arguments if you prefer
        String adj = "little";
        String name = "Mary";
        printWithNamedArguments(name, adj);
    }

    private static String getLambType() {
        return "little";
    }

    private static String getName(int index) {
        String[] names = {"little", "Mary"};
        return names[index];
    }

    private static void printWithNamedArguments(String name, String adj) {
        System.out.println(name + " had a " + adj + " lamb");
    }
}
```
