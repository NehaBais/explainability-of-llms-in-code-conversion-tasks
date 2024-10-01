## 5. What is the difference between an array and a list in Java?
An array is a data structure that stores elements of the same type in contiguous memory locations, while a list is a more flexible data structure that can store elements of different types and can be resized dynamically. The size of an array is fixed at compile-time, whereas the size of a list can be changed at runtime.
## 6. What are some Java built-in functions for manipulating strings?
1. `String length()`: Returns the number of characters in the string.
2. `String substring(int startIndex)`: Returns a new string that is a substring of this string, starting from the specified index to the end of the string.
3. `String substring(int startIndex, int endIndex)`: Returns a new string that is a substring of this string, starting from the specified start index and ending at the specified end index (exclusive).
4. `boolean contains(CharSequence s)`: Checks whether this string contains the specified sequence of characters.
5. `String toUpperCase()`: Converts all characters in this string to uppercase.
6. `String toLowerCase()`: Converts all characters in this string to lowercase.
7. `int indexOf(String str)`: Returns the index within this string of the first occurrence of the specified substring, or -1 if not found.
8. `boolean equalsIgnoreCase(String other)`: Compares this string to another string, ignoring case differences.
9. `String trim()`: Removes leading and trailing whitespace from this string.
## 7. What is meant by a variable-length argument list? Can we use it as an alternative to overloading with fixed arguments in Java?
Variable-length argument lists are used to pass a variable number of arguments to a method, without having to explicitly specify the type and number of parameters. They can be useful when you want to allow callers to provide any number of optional parameters or different types of data.
In Java, an ellipsis (...) followed by three dots (...), can be used in parameter lists to indicate that the corresponding argument is a variable-length argument list. For example:
```java
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
```java
public class MyClass {
    private int myVar;
}
Then the value of this field can be accessed from any other part of your program without needing to know about its type or scope. Similarly, constructors should only allow access via public methods that have been explicitly marked as such with "@Override". By contrast, if you want some other kind of entity (such as a method) then it needs to have either one of two keywords attached: abstract/final
## 10. What is the purpose of "super" in Java?
The `super` keyword in Java refers to an object that represents its parent class, and can be used within methods defined inside child classes (but not outside). This allows access from both subclasses or interfaces when overriding certain member functions with different signatures than what was originally declared on this superclass. For example:
```java
public void foo() { // method signature includes `super` keyword for accessing parent class properties, but only if overridden here! }

