int a[100001], n, rez[100001];

void mergeSort(int left, int right)
{
	if(left == right) return;
	else
	{
		int m = (left + right) / 2;
		mergeSort(left,m);
		mergeSort(m + 1,right);
		int ind1 = left, ind2 = m + 1, ind = 0;
		while(ind1 <= m && ind2 <= right)
		{
			if(a[ind1] <= a[ind2])
				rez[++ind] = a[ind1++];
			else
				rez[++ind] = a[ind2++];
		}
		while(ind1 <= m)
			rez[++ind] = a[ind1++];
		while(ind2 <= right)
			rez[++ind] = a[ind2++];
		for(int i = left; i <= right; ++i)
			a[i] = rez[i - left + 1];
	}
}
