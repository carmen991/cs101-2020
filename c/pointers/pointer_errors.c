int main(){
    int c, *pc;
    // pc is address but c is not
    pc = c; // Error
    // &c is address but *pc is not
    *pc = &c; // Error
    // both &c and pc are addresses
    pc = &c;
    // both c and *pc values
    *pc = c;
}