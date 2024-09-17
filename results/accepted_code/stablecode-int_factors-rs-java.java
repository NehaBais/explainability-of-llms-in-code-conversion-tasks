import java.util.*;

public class Main {

    static ArrayList<Integer> factor(int num) {
        ArrayList<Integer> factors = new ArrayList<>(); // creates a new vector for the factors of the number

        for (int i = 1; i <= Math.sqrt(num) + 1; i++) { 
            if (num % i == 0) {
                factors.add(i); // pushes smallest factor to factors
                factors.add(num/i)); // pushes largest factor to factors
            }
        }

        Collections.sort(factors); // sorts the factors into numerical order for viewing purposes

        return factors; // returns the factors
    }


    public static void main(String[] args) {

        System.out.println(factor(100))); // asserts that two expressions are equal to each other

        System.out.println(factor(101)));
    }
}