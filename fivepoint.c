#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>
//���һ������������1�ĸ���
//int count_one_bits(unsigned int num) {
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; ++i) {
//		if ((num>> i) & 1 == 1) {
//			count++;
//		}
//	}
//	return count;
//}

//���һ�����Ķ���������λ��ż��λ
//void Sort_Odd_Even(unsigned  int num) {
//	int count = 0;
//	int ret1 = 0;
//	int ret2 = 0;
//	int i = 0;
//	printf("ż��λΪ��");
//		for (i = 0; i<= 30; i += 2) {
//			ret1 = (num >> i) & 1;
//			printf("%d", ret1);
//		}
//	printf("\n");
//	printf("����λΪ��");
//		for (i = 1; i <=31; i += 2) {
//			ret2 = (num >> i) & 1;
//			printf("%d", ret2);
//		}
//	printf("\n");
//	}

//�ֱ����һ�����Ķ���������λ��ż��λ
//void Sort_Odd_Even(unsigned  int num) {
//	int count = 0;
//	int ret1 = 0;
//	int ret2 = 0;
//	int i = 0;
//	printf("ż��λΪ��");
//	for (i = 30; i >= 0; i -= 2) {
//		ret1 = (num >> i) & 1;
//		printf("%d", ret1);
//	}
//	printf("\n");
//	printf("����λΪ��");
//	for (i = 31; i >= 0; i -= 2) {
//		ret2 = (num >> i) & 1;
//		printf("%d", ret2);
//	}
//	printf("\n");
//}

//���һ�����Ķ�����λ
//void Ouput_one_bits(unsigned int num) {
//	int i = 0;
//	int ret = 0;
//	for (i = 31; i >= 0; --i) {
//		ret =(num >> i) & 1;
//		printf("%d", ret);
//	}
//}

//�����������ͬ�Ķ�����λ����
//int  Count_bits_num(unsigned int num1,unsigned int num2) {
//	int i = 0;
//	int count = 0;
//	for (i = 31; i >= 0; --i) {
//		int ret1 = 0;
//		int ret2 = 0;
//		ret1 = (num1 >> i) & 1;
//		ret2 = (num2 >> i) & 1;
//		if ((ret1 ^ ret2)== 1) {
//			count++;
//		}
//	}
//	return count;
//}
//#define n 10
//int arr[n][n];
 
//������ֵ�Ķ�����λ�����ҷ�ת�����
//unsigned int reverse_bit(unsigned int num) {
//	int i = 0;
//	int arr[32];
//	int ret = 0;
//	unsigned int result = 0;
//	for (i = 0; i <= 31; ++i) {
//		ret= (num >> i) & 1;
//		if (ret == 0) {
//			continue;
//		}
//		else {
//			arr[i] = ret;
//		}
//		result += (unsigned int)pow(2, 31-i);
//	}
//	return result;
//}

//��ת�ַ�����
//�����ַ�����
//int len(char *str) {
//	int count = 0;
//	assert(str); //������䣬ǰ���������ԣ�����ִ��֮ǰ����߱�������
//	while (*str!= '\0') {
//		count++;
//		str++;
//	}
//	return count;
//}
//������
//void reverse(char a[], int left, int right) {
//	while (left < right) {
//		char tmp = a[left];
//		a[left] = a[right];
//		a[right] = tmp;
//		left++;
//		right--;
//	}
//}
//�����ַ���
//char* reverse_str(char a[]) {
//	int i = 0;
//	int left = 0;
//	int right = len(a) - 1;
//	reverse(a, left, right);
//	while (a[i] != '\0') {
//		left = i;
//		while ((a[i] != '\0') && (a[i] != ' ')){
//			i++;
//		}
//		right = i - 1;
//		reverse(a, left, right);
//		if (a[i] != '\0')
//			i++;
//	}
//	return a;
//}

//�����ַ�������
int len(char* str) {
	int count = 0;
	//assert(str);
	while (*str != '\0') {
		count++;
		str++;
	}
	return count;
}

//��ת����
void reverse(char a[],int left,int right) {
	while (left < right) {
		char tmp = a[left];
		a[left] = a[right];
		a[right] = tmp;
		left++;
		right--;
	}
}
//��ת�ַ�����
//char* reverse_str(char a[]) {
//	int i = 0;
//	int left = 0;
//	int right = len(a) - 1;
//	reverse(a, left, right);
//	while (a[i]!='\0') {
//		left = i;
//		while (a[i] != '\0'&& a[i] != ' ') {
//			i++;
//		}
//		right = i - 1;
//		reverse(a, left, right);
//		if (a[i] != '\0')
//			i++;
//	}
//	return a;
//}
int main() {
	//char a[] = "student a am i";
	//reverse_str(a);
	//printf("%s\n", a);

	//��ʹ��(a+b)/2���ַ�ʽ������������ƽ��ֵ
	//int a, b;
	//int ret = 0;
	//scanf("%d %d", &a, &b);
	////ret = (a >> 1) + (b >> 1);
	//ret = (a + b) >> 1;
	//printf("%d\n", ret);
	
	//���ʵ�֣� 
	/*һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
		���ҳ�������֡���ʹ��λ���㣩*/
	//int arr[] = { 1,8,8,6,7,7,6,9,1 };
	//int i = 0;
	//int len = sizeof(arr) / sizeof(arr[0]);
	//for (i = 1; i < len; ++i) {
	//	arr[0] = arr[0] ^ arr[i];
	//}
	//printf("The single num is:%d", arr[0]);

	//int num;
	//scanf("%d", &num);
	//printf("%u\n",reverse_bit(num));
	
	
	
	
	//��ӡ�������
	//int i, j;
	//for(i=0;i<n;++i) //��
	//	for (j = 0; j <= i; ++j) {  //��
	//		if (i == 0||i==j) {
	//			arr[i][j] = 1;
	//			printf("%d ", arr[i][j]);
	//			printf("\n");
	//		}
	//		else {
	//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
	//			printf("%d ", arr[i][j]);
	//		}
	//		//if (i == j) {
	//			//printf("\n");
	//	}

	//int num1 = 0;
	//int num = 0;
	//int num2 = 0;
	//printf("�������������");
	//scanf("%d %d", &num1,&num2);
	//scanf("%d", &num);
	//printf("��ͬ��bit=%d\n",Count_bits_num(num1,num2));
	//Sort_Odd_Even(num);

	//�ж�����˵ı�������
	//int a, b, c, d, e;
	//for (a = 1; a < 6; ++a) {
	//	for (b = 1; b < 6; ++b) {
	//		for (c = 1; c < 6; ++c) {
	//			for (d = 1; d < 6; ++d) {
	//				for (e = 1; e < 6; ++e) {
	//					if ((b == 2 && a != 3) || (b != 2 && a == 3)) {
	//						if ((b == 2 && e != 4) || (b != 2 && e == 4)) {
	//							if ((c == 1 && d != 2) || (c != 1 && d == 2) ) {
	//								if ((c == 5 && d != 3) || (c != 5 && d == 3) ) {
	//									if ((e == 4 && a != 1) || (e != 4 && a == 1) ) {
	//										if (a*b*c*d*e == 120) {
	//											printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
	//										}
	//									}
	//								}
	//							}
	//						}
	//					}
	//				}
	//			}
	//		}
	//	}
	//}

	//�ж�����˵ı�������
	//int b = 0;
	//int e = 0;
	//for (b = 1; b < 6; ++b) {
	//	for (e = 1; e < 6; ++e) {
	//		int a = e != 4 ? 1 : 3;
	//		int d = a == 3 ? 2 : 3;
	//		int c = d == 2 ? 5 : 1;
	//			if (a*b*c*d*e == 120) {
	//				printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
	//			}
	//		}
	//	}

	//������Ϊ0����Ϊ1  �ж�˭������
	//int b = 0;
	//for (b = 0; b < 2; ++b) {
	//	int a = 0;
	//		int c = b == 0 ? 1 : 0;
	//		int d = c == 0 ? 1 : 0;
	//		if (a + b + c + d == 1) {
	//			printf("a=%d b=%d c=%d d=%d\n", a, b, c, d);
	//		}
	//}

	system("pause");
	return 0;
}