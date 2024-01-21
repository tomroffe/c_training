#include "stdio.h"
#include "hash_table.c"

int main(int argc, char** argv) {
    ht_hash_table* ht = ht_new();
    ht_del_hash_table(ht);
    
    char* text = "cat";
    int my_hash = ht_hash(text, 163, 53);

    printf("Output: %d", my_hash);
    return(0);
}
