// Generate the Euler number
// --------------------------
// Generates a euler number using
// factorial sequence.
//
extern unsigned long mk_factorial(unsigned long);

double euler;
void mk_euler(unsigned int n_terms){
    double sum=0;
    for(int n=0; n<n_terms; n++){
        sum+=1/(double)mk_factorial(n);
    }
    euler=sum;
}
