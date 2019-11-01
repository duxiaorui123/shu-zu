////找出二维数组中最大的值
//# include <stdio.h>
//
//int main()
//{
//	int a[3][4] = { {1,3,6,-5},{2,8,-10,20},{1,2,3,4} };  //定义二维数组,三行四列
//	int i, j;           //i表示行，j表示列
//	int row, colum;       
//	int max = a[0][0];      //假设最大值为a[0][0]
//
//	for (i = 0; i <= 2; ++i)          //循环行
//	{
//		for (j = 0; j <= 3; ++j)     //循环列
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