
int compare(int a, int b) {
	    return b-a;
}


int q_sort_compare(const void* a, const void* b) {
	    return (*(int*)b)-(*(int*)a);
}