// Generate Fibonnaci Numbers
// ==========================
// The numbers in the sequence are the most recent 2
// numbers `fib_1` and `fib_2`.
//
// The algorithm generates numbers in the order:
// 0, 1, 1, 2, 3, 5, 8, 13, 21 ...
// 
// Usage
// -----
// Call `mk_fib` to generate the next combination
// of numbers to occupy `fib_1` and `fib_2`.

// Refers to an older number in the sequence.
unsigned long int fib_1=0;

// Refers to the latest number in the sequence
unsigned long int fib_2=1;

void mk_fib(void){
    unsigned long int temp=fib_2;
    fib_2+=fib_1;
    fib_1=temp;
}
