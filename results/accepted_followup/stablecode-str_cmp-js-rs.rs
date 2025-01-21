fn main() {
    println!("{:?}", comparison_test()));
}

struct ComparisonTest;

impl ComparisonTest {
    // Demonstrating equal values with exact type equality 
    fn exact_type_equal(&self) -> bool {
        "abcd" == "abcd"
    }

    // Demonstrating not equal values 
    fn not_equal_values(&self) -> bool {
        "ABCD" != "abcd"
    }

    // Demonstrating lexical ordering before 
    fn lexically_ordered_before(&self) -> bool {
        "abcd" < "dcba"
    }

    // Demonstrating lexical ordering after 
    fn lexically_ordered_after(&self) -> bool {
        "abcd" > "dcba"
    }

    // Demonstrating case insensitive comparison 
    fn case_insensitive_comparison(&self) -> bool {
        "ABCD".to_lowercase() ==  "abcd".to_lowercase()
    }
}

fn comparison_test() -> (bool, bool, bool, bool, bool)> {
    (
        ComparisonTest::exact_type_equal(), 
        ComparisonTest::not_equal_values(), 
        ComparisonTest::lexically_ordered_before(), 
        ComparisonTest::lexically_ordered_after(), 
        ComparisonTest::case_insensitive_comparison()
    )
}