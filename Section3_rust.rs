fn main() {
    let mut num = Box::new(10);  // Heap allocation
    println!("Original: {}", num);

    change_value(&mut num);  // Borrowing mutably
    println!("After change: {}", num);
}

fn change_value(n: &mut Box<i32>) {
    **n += 5;  // Dereference to modify value
}