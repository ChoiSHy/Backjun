#pragma warning(disable:4996)

// 1~n������ �ڿ��� �� m���� �� ����
// ���� ���� ���� �� ��� �ȴ�

#include <stdio.h>
#include <math.h>
int m, n;

void func() {
	int arr[8] = { 1,1,1,1,1,1,1,1 };
	int c = pow(n, m);
	for (int i = 0; i < c; i++) {
		for (int j = 1; j < m+1; j++)
			printf("%d ", arr[j]);
		puts("");

		arr[m]++;
		for (int j = m; j > 0; j--) {
			if (arr[j] > n) {
				arr[j] = 1;
				arr[j - 1]++;
			}
		}

	}
}
int main() {
	scanf("%d %d", &n, &m);
	func();
}
