fn add_two(a: i32, b: i32) -> i32 {
    return a + b;
}
    
fn main() {
    for (x = 0; x < 1001; x++) {
        add_two(1, 1);
        if (x == 1000){
            println!("{}", x);
        }
    }
    
}
