#include <stdio.h>
int divisor_count(int number); // 약수개수 구하는 함수 미리 선언
int weight; // 리턴할 철의 무게 

int solution(int number, int limit, int power) { // 기사 넘버, 제한수치, 규제된 공격력
	int original_power; // 원래의 공격력 계산 (빠꾸먹기 전의 공격력)

  // 기사 한 명씩 공격력 계산하여 누적해서 더하기
	for (int i=1; i<=number; i++) { // 모든 사람에 대해 검사
		original_power = divisor_count(i); // i번째 number를 가진 사람의 원래의 공격력
		if (original_power > limit) // 제한수치 초과하면 빠꾸먹임
			weight += power;
		else { // 원래 공격력이 제한수치보다 작거나 같으면 통과! 약해서 견제가안되는 기사님들
			weight += original_power;
		}	
	}
	return weight; // for문을 다 돌고 누적된 weight값을 리턴
}


// 기사의 number를 받아서 약수의 개수를 출력하는 함수 
int divisor_count(int number) {
    int count = 0;
    int sqrt_num = (int)sqrt(number);  // 제곱근을 계산하고 정수로 변환

    for (int i = 1; i <= sqrt_num; i++) {  // 1부터 제곱근까지 반복
        if (number % i == 0) {  // i가 약수인지 직접 확인
            count += 1;  // i가 약수일 경우 카운트 증가
            if (i != number / i) {  // i와 짝이 되는 약수가 다를 경우
                count += 1;  // 짝이 되는 약수도 카운트
            }
        }
    }
    return count;
}