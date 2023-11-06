#include <stdio.h>

void longest_subarray(int A[], int N) {
    // Kh?i t?o bi?n
    int curr_len = 1;
    int max_len = 1;
    int curr_sum = A[0];
    int max_sum = A[0];
    int start = 0;
    int end = 0;

    // Qu�t d�y s? A t? ph?n t? th? 2 d?n ph?n t? cu?i
    for (int i = 1; i < N; i++) {
        if (A[i] != A[i-1]) {
            // N?u ph?n t? kh�c v?i ph?n t? cu?i c�ng c?a d�y con hi?n t?i
            curr_len += 1;
            curr_sum += A[i];
        } else {
            // N?u ph?n t? tr�ng v?i ph?n t? cu?i c�ng c?a d�y con hi?n t?i
            if (curr_len > max_len) {
                // C?p nh?t th�ng tin v? d�y con c� d? d�i v� t?ng l?n nh?t t�m du?c
                max_len = curr_len;
                max_sum = curr_sum;
                end = i-1;
                start = end - max_len + 1;
            }
            // B?t d?u m?t d�y con m?i t? ph?n t? d�
            curr_len = 1;
            curr_sum = A[i];
        }
    }
    // Ki?m tra d�y con hi?n t?i c� d? d�i l?n hon d�y con c� t?ng l?n nh?t hay kh�ng
    if (curr_len > max_len) {
        max_len = curr_len;
        max_sum = curr_sum;
        end = N-1;
        start = end - max_len + 1;
    }
    // In ra d? d�i c?a d�y con v� c�c ph?n t? c?a d�y con c� t?ng l?n nh?t
//    printf("Do dai cua day con: %d\n", max_len);
//    printf("Day con: ");
	printf("%d\n",max_len);
    for (int i = start; i <= end; i++) {
        printf("%d ", A[i]);
    }
//    printf("\n");
}

int main() {
    int N;
    scanf("%d",&N);
    int A[N];
    for(int i=0;i<N;i++){
    	scanf("%d",&A[i]);
	}
	longest_subarray(A,N);
}

