#include <stdio.h>


void quick_sort(int s[],int l,int r)
{
	if (l < r)
	{		
	    int i = l, j = r;
	    int x = s[i];
        while (i < j)
		{
			while (i != j)
			{
				if (s[j] <= x)
				{
					s[i] = s[j];
					i++;
					break;
				}
				j--;
			}
			while (i != j)
			{
				if (s[i] > x)
				{
					s[j] = s[i];
					j--;
					break;
				}
				i++;
			}

		}	
		s[i] = x;
		quick_sort(s, l, i - 1);
		quick_sort(s, i + 1, r);
	}
}











//快速排序
    void quick_sort0(int s[], int l, int r)
   {
    if (l < r)
     {
        //Swap(s[l], s[(l + r) / 2]); //将中间的这个数和第一个数交换 参见注1
        int i = l, j = r, x = s[l];
        while (i < j)
        {
            while (i < j && s[j] >= x) // 从右向左找第一个小于x的数
                j--;
            if (i < j)
                s[i++] = s[j];
            while (i < j && s[i] < x) // 从左向右找第一个大于等于x的数
                i++;
            if (i < j)
                s[j--] = s[i];
        }
        s[i] = x;
        quick_sort0(s, l, i - 1); // 递归调用 
        quick_sort0(s, i + 1, r);
        } 
     }


    int main56464()
    {
        int a[] = { 75,46,99,67,26,44,88 };
        int length = sizeof a / sizeof a[0]-1;
        quick_sort(a, 0, length);
        for (int i = 0; i <= length; i++)
        {
            printf("%d\n", a[i]);
        }

        return 0;
    }
