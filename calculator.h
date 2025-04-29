typedef int (*operation_func)(int, int);

int sum(int x, int y) {
    return x + y;
}

int sub(int x, int y) {
    return x - y;
}

int mul(int x, int y) {
    return x * y;
}
operation_func op_sum = sum;
operation_func op_sub = sub;
operation_func op_mul = mul;
