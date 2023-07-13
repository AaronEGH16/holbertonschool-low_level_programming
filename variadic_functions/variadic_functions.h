#ifndef variadic_functions_h
#define variadic_functions_h

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

typedef struct op
{
	char *op;
	void (*f)(void a);
} op_t;

void pr_char((int)a);
void pr_int((int)a);
void pr_float((double)a);
void pr_string((char*)a);

#endif
