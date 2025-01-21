import java.util.*;

public class Main {

    static ArrayList<Integer> factor(int num) {
        ArrayList<Integer> factors = new ArrayList<>(); 

        for (int i = 1; i <= Math.sqrt(num) + 1; i++) { 
            if (num % i == 0) {
                factors.add(i); 
                factors.add(num/i)); 
            }
        }

        Collections.sort(factors); 

        return factors; 
    }


    public static void main(String[] args) {
        System.out.println(factor(100))); // asserts that two expressions are equal to each other
        System.out.println(factor(101)));
    }
}