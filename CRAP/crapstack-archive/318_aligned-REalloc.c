#include <stdlib.h>

void *aligned_realloc(void *ptr, size_t old_size, size_t alignment, size_t size) {
    char *new_ptr = aligned_alloc(alignment, size);

    if (new_ptr == NULL)
        return NULL;

    size_t copy_size = (old_size < size) ? old_size : size; // get min

    if (ptr != NULL)
        memcpy(new_ptr, ptr, copy_size);

    free(ptr);

    return new_ptr;
}
