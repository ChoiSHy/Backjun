#pragma warning(disable:4996)

// 1 ~ N ������ �� ��, M���� ���� ��� ���� �������� ���

#include <stdio.h>

int ans[9] = { 0, };
int visited[9] = { 0, };
int m, n;

void func(int x) {	//x�� x��° �ڸ���
	// m���� ���� ���� �ڿ��� ���
	if (x == m + 1) {
		for (int i = 1; i <= m; i++)
			printf("%d ", ans[i]);
		puts("");
	}
	// m���� ���� �̱� ��
	else {
		for (int i = 1; i <= n; i++) {
			// 1 ~ n ������ ���� m��° �ڸ��� �ֱ�
			// �湮�� �� ���� ��쿡�� �ְ�, �ƴϸ� �Ѿ��
			if (visited[i] == 0) {
				visited[i] = 1;		
				ans[x] = i;
				func(x + 1);	//���� �ڸ��� �Լ� ����
				visited[i] = 0;
			}
		}
	}
}

int main() {
	scanf("%d %d", &n, &m);
	func(1);

	return 0;
}