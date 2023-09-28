
int binarySch(int* arr, int size, int numberTOFind)
{
	int mid = 0;
	int end = size - 1;
	int start = 0;

	do
	{
		mid = end - ((end - start) / 2);
			
		if (arr[mid] > numberTOFind)
		{
			end = mid - 1;
		}
		else if (arr[mid] < numberTOFind)
		{
			start = mid + 1;
		}
	} while (start <= end && arr[mid] != numberTOFind);

	if (arr[mid] != numberTOFind)
		return -1;
	else 
		return mid;
}