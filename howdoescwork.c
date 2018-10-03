#include<stdio.h>

int main() {
	char helloworld[50] = "Hello, World!";
	for(int i = 0; i < 50; i++) {
		if(helloworld[i] == '\0') {
			break;
		}
		putchar(helloworld[i]);
	}
	return 0;
}

// i think this compiles idk what do i look like an expert
