#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

size_t string_length(const char *s);

// TODO: Declarations

int main(void)
{
    // Verify string_length()
    assert(string_length("1001 0011 1111 0000") == 19); 

    // Verify string_equal()
    assert(string_equal("1100", "1100"));   // s1 == a2
    assert(!string_equal("100", "1100"));   // s1 is too short
    assert(!string_equal("0100", "1100"));  // s1 != s2

    // Verify string_copy()
    char *s = "1001 0011 1111 0000";    
    char *p = string_copy(s);
    printf("\"%s\" \n", p);
    assert(string_equal("1001 0011 1111 0000", p));  
    free(p);

    // Verify string_concatenation()
    char *s1 = "1001 0011 ";
    char *s2 = "1111 0000";
    char *q = string_concatenation(s1, s2);
    printf("\"%s\" \n", q);
    assert(string_equal("1001 0011 1111 0000", q));  
    free(q);

    return 0;
}

size_t string_length(const char *s)
{
    size_t len = 0;
    int i=0;
 
    while(s[i++] != '\0')
    {
        len++;
    }

    return len;
}

// TODO: Implementations