int main(){
    
    // usei x = 9 apenas para testar
    int x = 9, *xptr;
    xptr = &x;

    *xptr /= 3;
    printf("\n%d\n\n", *xptr);

 return 0;
} 