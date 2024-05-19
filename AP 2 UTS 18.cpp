
using namespace std;
int main()
{
	int matrik1[2][3]={{5,6,7},{2,3,4}};
	int matrik2[3][2]={{5,6},{7,2},{3,4}};
	
	int hslMatrik[10][10];
	int juml=0;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			for(int k=0;k<3;k++)
			{
				juml += matrik1[i][k] * matrik2[k][j];
			}
			hslMatrik[i][j]=juml;
			jml=0;
		}
	}
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout << hslMatrik[i][j] <<"\t";
		}
		cout << endl;
	}
}
