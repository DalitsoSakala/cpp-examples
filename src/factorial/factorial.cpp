// Produces n factorial
//

unsigned long mk_factorial(unsigned long n){
    if(n<=1)  return 1;
    return n*mk_factorial(n-1);
}
