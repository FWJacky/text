#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>
//输出一个数二进制中1的个数
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

//输出一个数的二进制奇数位和偶数位
//void Sort_Odd_Even(unsigned  int num) {
//	int count = 0;
//	int ret1 = 0;
//	int ret2 = 0;
//	int i = 0;
//	printf("偶数位为：");
//		for (i = 0; i<= 30; i += 2) {
//			ret1 = (num >> i) & 1;
//			printf("%d", ret1);
//		}
//	printf("\n");
//	printf("奇数位为：");
//		for (i = 1; i <=31; i += 2) {
//			ret2 = (num >> i) & 1;
//			printf("%d", ret2);
//		}
//	printf("\n");
//	}

//分别输出一个数的二进制奇数位和偶数位
//void Sort_Odd_Even(unsigned  int num) {
//	int count = 0;
//	int ret1 = 0;
//	int ret2 = 0;
//	int i = 0;
//	printf("偶数位为：");
//	for (i = 30; i >= 0; i -= 2) {
//		ret1 = (num >> i) & 1;
//		printf("%d", ret1);
//	}
//	printf("\n");
//	printf("奇数位为：");
//	for (i = 31; i >= 0; i -= 2) {
//		ret2 = (num >> i) & 1;
//		printf("%d", ret2);
//	}
//	printf("\n");
//}

//输出一个数的二进制位
//void Ouput_one_bits(unsigned int num) {
//	int i = 0;
//	int ret = 0;
//	for (i = 31; i >= 0; --i) {
//		ret =(num >> i) & 1;
//		printf("%d", ret);
//	}
//}

//输出两个数不同的二进制位个数
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
 
//将返回值的二进制位从左到右反转后输出
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

//逆转字符数组
//计算字符长度
//int len(char *str) {
//	int count = 0;
//	assert(str); //断言语句，前置条件断言：代码执行之前必须具备的特性
//	while (*str!= '\0') {
//		count++;
//		str++;
//	}
//	return count;
//}
//逆序函数
//void reverse(char a[], int left, int right) {
//	while (left < right) {
//		char tmp = a[left];
//		a[left] = a[right];
//		a[right] = tmp;
//		left++;
//		right--;
//	}
//}
//逆序字符串
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

//计算字符串长度
int len(char* str) {
	int count = 0;
	//assert(str);
	while (*str != '\0') {
		count++;
		str++;
	}
	return count;
}

//逆转函数
void reverse(char a[],int left,int right) {
	while (left < right) {
		char tmp = a[left];
		a[left] = a[right];
		a[right] = tmp;
		left++;
		right--;
	}
}
//逆转字符数组
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

	//不使用(a+b)/2这种方式，求两个数的平均值
	//int a, b;
	//int ret = 0;
	//scanf("%d %d", &a, &b);
	////ret = (a >> 1) + (b >> 1);
	//ret = (a + b) >> 1;
	//printf("%d\n", ret);
	
	//编程实现： 
	/*一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
		请找出这个数字。（使用位运算）*/
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
	
	
	
	
	//打印杨辉三角
	//int i, j;
	//for(i=0;i<n;++i) //行
	//	for (j = 0; j <= i; ++j) {  //列
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
	//printf("请输出两个数：");
	//scanf("%d %d", &num1,&num2);
	//scanf("%d", &num);
	//printf("不同的bit=%d\n",Count_bits_num(num1,num2));
	//Sort_Odd_Even(num);

	//判断五个人的比赛排名
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

	//判断五个人的比赛排名
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

	//假设真为0，假为1  判断谁是凶手
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