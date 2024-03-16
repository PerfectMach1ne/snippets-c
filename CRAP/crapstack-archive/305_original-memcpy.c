void *my_memcpy(void *dest, void *src, int byte_count) {
    // Convert void*s to char*s
    char *s = src, *d = dest;

    // Now that we have char*s, we can dereference and copy them
    while (byte_count--) { // we decrement byte_count until it becomes false (0)
        *d++ = *s++;
        // order of things happening in this expression:
        // 1: d = s;
        // 2: d + 1, s + 1
    }

    // Most of these functions return the destination, just in case
    // that's useful to the caller.
    return dest;
}
