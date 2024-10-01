public static void printAll(String... args) {
    for (String arg : args) {
        System.out.println(arg);
    }
}
printAll("Hello", "world"); // prints "Hello" and then "world"
The use of variable-length argument lists is not considered a replacement for overloading with fixed arguments in Java, but they can be used to provide additional flexibility in method signatures.
## 8. When would you prefer using an array or an ArrayList? And when should we avoid the usage of Arrays and Lists altogether?
The choice between arrays and ArrayLists depends on your specific needs:
- Use arrays for fixed size collections where performance is critical, or if you want to use primitive types directly (e.g., int[]). They are faster than ArrayLists since they don't require additional memory management overhead.
- Use ArrayLists when dynamic resizing is required and type safety isn't important. ArrayList provides many convenient methods for adding, removing, and accessing elements in the collection, making it easier to work with them programmatically without worrying about data types or sizes beforehand. For example: ArrayList<Integer> list = new ArrayList<>(); list.add(1); // adds an integer value
## 9. What are access modifiers? When do we use private/public/protected and default modifiers in Java classes? How many different kinds of variables can be defined within a class?
Access modifiers are used to control the accessibility (visibility) of members of a class, such as methods, fields, constructors, etc., from other parts of your program. There are four types: public, protected, private and default access levels which correspond respectively with no modifier keyword when defining them in code for example if you have an instance variable defined within a class like so