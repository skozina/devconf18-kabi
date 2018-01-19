#include <stdio.h>
#include "foo.h"

int main(int argc, char **argv) {
	foo_t f = { 3, 4 };
	printf("bar: %d\n", bar(&f));
	return (0);
}
