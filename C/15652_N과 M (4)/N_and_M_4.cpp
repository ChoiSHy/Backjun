#pragma warning(disable:4996)

// 1~n �ڿ��� �� m�� �� ����
// ���� ���� ���� �� ��� ��
// �� ������ �񳻸����� a1 <= a2 <= a3 <= ...

#include <stdio.h>

int n, m;
int ans[9];

void func(int x, int y) {
	if (y == m + 1) {
		for (int i = 1; i < m + 1; i++)
			printf("%d ", ans[i]);
		puts("");
	}
	else {
		for (int i = x; i < n + 1; i++) {
			ans[y] = i;
			func(i,y + 1);
		}
	}
}
int main() {
	scanf("%d %d", &n, &m);
	func(1,1);
}