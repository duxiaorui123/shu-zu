////�ҳ���ά����������ֵ
//# include <stdio.h>
//
//int main()
//{
//	int a[3][4] = { {1,3,6,-5},{2,8,-10,20},{1,2,3,4} };  //�����ά����,��������
//	int i, j;           //i��ʾ�У�j��ʾ��
//	int row, colum;       
//	int max = a[0][0];      //�������ֵΪa[0][0]
//
//	for (i = 0; i <= 2; ++i)          //ѭ����
//	{
//		for (j = 0; j <= 3; ++j)     //ѭ����
//		{
//			if (a[i][j] > max)
//			{
//				max = a[i][j];
//				row = i;
//				colum = j;
//			}
//		}
//	}
//	printf("%d\n%d\n%d\n", max, row, colum);
//
//	return 0;
//}