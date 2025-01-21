trait MyTrait {
    fn cmp(&self, other: &Self) -> Ordering;
}

struct MyStruct;
impl MyTrait for MyStruct {
    fn cmp(&self, _other: &MyStruct) -> Ordering {
        // Your implementation here
    }
}
