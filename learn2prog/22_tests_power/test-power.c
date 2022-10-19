#include <stdlib.h>
#include <stdio.h>

unsigned power(unsigned x, unsigned y);

unsigned run_check(unsigned x, unsigned y, unsigned expected_ans) {
	if (power(x, y) != expected_ans) {
		exit(EXIT_FAILURE);
	}
}

int main() {
	unsigned x0 = 0, x1 = 1, x2 = -1, x3 = 3;
	unsigned y0 = 0, y1 = 1, y2 = 3;

	run_check(x0, y0, 1);
	run_check(x0, y1, 0);
	run_check(x1, y0, 1);
	run_check(x2, y0, 1);
	run_check(x2, y1, -1);
	run_check(x3, y2, 27);

	return EXIT_SUCCESS;
}