#include <stdlib.h>

int main(void) {
	void * ptr = malloc(sizeof(int));
	realloc(ptr, sizeof(long));

	free(ptr);

	ptr = calloc(2, sizeof(int));

	free(ptr);
	return 0;
}
