#include <stdio.h>
#include <stdlib.h>

int htoi(char s[]){
	
	int hexDigit, i = 0, n;
	
	// checks if s[i] is 0. If true increase i by 1
	if(s[i] == '0'){
		
		++i;
		// if s[i] is x or X, increase by 1
		if(s[i] == 'X' || s[i] == 'x')
		++i;
	}
	
	n = 0;// integer to be returned	
	for(; s[i] != '\0'; ++i){
		
		if(s[i] >= '0' && s[i] <= '9')
			hexDigit = s[i] - '0';
		else if(s[i] >= 'a' && s[i] <= 'f')
			hexDigit = s[i] - 'a' + 10;
		else if(s[i] >= 'A' && s[i] <= 'F')
			hexDigit = s[i] - 'A' + 10;
		else
			s[i] = 0;
		
		n = 16 * n + hexDigit;
	}
	return n;
}

int main(void) {
	
    printf("%s\n", (htoi("0") == 0) ? "pass" : "fail");
    printf("%s\n", (htoi("1") == 1) ? "pass" : "fail");
    printf("%s\n", (htoi("9") == 9) ? "pass" : "fail");
    printf("%s\n", (htoi("a") == 10) ? "pass" : "fail");
    printf("%s\n", (htoi("f") == 15) ? "pass" : "fail");
    printf("%s\n", (htoi("A") == 10) ? "pass" : "fail");
    printf("%s\n", (htoi("F") == 15) ? "pass" : "fail");
    printf("%s\n", (htoi("10") == 16) ? "pass" : "fail");
    printf("%s\n", (htoi("1d") == 29) ? "pass" : "fail");
    printf("%s\n", (htoi("e1") == 225) ? "pass" : "fail");
    printf("%s\n", (htoi("abc") == 2748) ? "pass" : "fail");
    printf("%s\n", (htoi("a2b") == 2603) ? "pass" : "fail");
    printf("%s\n", (htoi("5C7") == 1479) ? "pass" : "fail");
    printf("%s\n", (htoi("a1b2") == 41394) ? "pass" : "fail");
    return 0;
}
