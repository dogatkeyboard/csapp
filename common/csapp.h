typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len);
void show_int(int x);
void show_float(float x);
void show_long(long x);
void show_short(short x);
void show_double(double x);
void show_pointer(void *x);
int is_little_endian();
int get_msb(int x);
unsigned replace_byte(unsigned x, int i, unsigned char b);
