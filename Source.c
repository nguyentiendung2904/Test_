#include<stdio.h>
#include<conio.h>

void NhapMang(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("arr[%d]:", i);
		scanf_s("%d", &arr[i]);
	}	
}

void XuatMang(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d", arr[i]);
	}
}

int TinhTong(int arr[], int n)
{
	int tong = 0;
	for (int i = 0; i < n; i++)
	{
		tong += arr[i];
	}
	return tong;
}


int main()
{
	int n;
	printf("\nNhap so phan tu cua mang:");
	scanf_s("%d", &n);

	int Mang[100];
	printf("\nNhap mang:\n");
	NhapMang(Mang, n);

	TinhTong(Mang, n);
	int tong = TinhTong(Mang, n);
	printf("\nTong cac phan tu trong mang la: %d", tong);




}