#include<cstdio>
int i;//��¼����
void move(int n, char from, char to)
{
	printf("The %d step: move %c to %c\n", i++, from, to);
}

//��ŵ���ݹ�����
//n��ʾҪ�����ٸ����Ӵ���ʼ�ƶ���Ŀ��
void Hanio(int n, char start_pos, char tran_pos, char end_pos)
{
	if (n == 1) {//��n==1ʱ��ֻ��Ҫ���������Ӵ���ʼ�ƶ���Ŀ�꼴��
		move(n, start_pos, end_pos);
	}
	else {
		Hanio(n - 1, start_pos, end_pos, tran_pos);//�ݹ鴦��һ��ʼ��ʱ���Ƚ�n-1�������ƶ����������ϣ�������յ�Ŀ��Ϊ������
		move(n, start_pos, end_pos);//Ȼ���ٽ����µĴ������ƶ���Ŀ������
		Hanio(n - 1, tran_pos, start_pos, end_pos);//Ȼ���ظ��������裬��ʱ�ڹ������ϵ�n-1�����ӣ���ʱ��ԭ������ʼ����Ϊ����������������Ϊ��ʼ��
	}
}

int main()
{
	int n;
	while (scanf_s("%d", &n) == 1 && n) {
		i = 0;
		Hanio(n, 'a', 'b', 'c');
		printf("Total steps: %d\n", i);
	}
	return 0;
}
//��С����ͨ�ʽΪ2^n -1��