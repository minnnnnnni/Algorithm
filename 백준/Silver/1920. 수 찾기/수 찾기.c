#include <stdio.h>
#include <stdlib.h> // 배열 정렬 위해

int n,m; // 배열의 원소개수는 전역변수로 관리하기
int binary_search(long arr[], int size, long key);
int compare(const void *a, const void *b) {
    const long arg1 = *(const long *)a;
    const long arg2 = *(const long *)b;
    if (arg1 < arg2) return -1;
    if (arg1 > arg2) return 1;
    return 0;
}
int binary_search(long key[], int size, long value) { // 찾고자하는 값이 기존 key배열에 존재하는지 판단.
    int lower = 0, upper = size-1, mid; 
    while (lower <= upper) {
        mid = (lower + upper) / 2; // mid는 반복문 안에서 초기화
        if (value == key[mid]) { // 찾으면
            return 1; // 값을 찾으면 함수 종료, break을 쓰면 0이 항상 출력됨 
        }
        else if (value < key[mid]) {
            upper = mid-1;
        }
        else if (value > key[mid]) {
            lower = mid+1;
        }
    }
    return 0;
}
int main(void) {
    scanf("%d", &n); // key 배열의 원소개수 n 입력받기
    long *key = malloc(n * sizeof(long));
    for (int i=0; i<n; i++) {
        scanf("%ld", &key[i]); // key배열의 각 원소에 대해 입력받으므로 &연산자 사용
    }
    
    scanf("%d", &m); // 탐색할 배열의 원소개수 m 입력받기
    long *arr = malloc(m * sizeof(long));
    for (int i=0; i<m; i++) {
        scanf("%ld", &arr[i]);
    }
    
    qsort(key, n, sizeof(long), compare); // 입력받은 key배열 정렬하기
   
    // 반복문을 m번 돌면서 arr배열의 모든 요소들이 key 배열에 있는지 판단, 있으면 1 없으면 0 출력
    for (int i=0; i<m; i++) {
        int result = binary_search(key, n, arr[i]);
        printf("%d\n", result);
    }
    free(key);
    free(arr);
    return 0;
}

