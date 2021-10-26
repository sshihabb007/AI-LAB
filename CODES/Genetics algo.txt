#include<iostream>
#include<algorithm>
#include<sstream>

using namespace std;

int arr[500];
int arrX2[500];
int fit[500];
int i=0,j=0,populationNum=0;
int total,sum=0,average=0,maxNum=0;
int binaryArr[100][100];
int tempArr[100][100];
int c=0;

int binToDec(int num)
{
    long bin, dec = 0, rem,base = 1;
    bin = num;
    while (num > 0)
    {
        rem = num % 10;
        dec = dec + rem * base;
        base = base * 2;
        num = num / 10;
    }
    arr[i++]=dec;;
    return 0;
}
int funcX2(int decimal)
{
    arrX2[j++]=decimal*decimal;
    return 0;
}

int MaxNumber()
{
    int temp=0;
    for(int i=0;i<populationNum;i++)
    {
        if(arrX2[i]>temp)
        temp=arrX2[i];
    }
    cout <<"The biggest number is: " << temp << endl;
    return 0;

}

void fitness(int av)
{
    for(int i=0;i<populationNum;i++)
    {
        cout<<arr[i]<<endl;
        cout<<arrX2[i]<<endl;
        float temp= (float) arr[i] / av ;
        cout<<temp;
        fit[i++]=temp;
    }
}

void BinNumToArr(int binNum, int i)
{
	int c = 0;
	int temp = binNum;
	while (temp > 0)
	{
		tempArr[i][c] = temp % 10;
		temp /= 10;
		c++;
	}

	for (int ii = c - 1, j = 0; ii >= 0; ii--, j++)
	{
		binaryArr[i][ii] = tempArr[i][j];
	}
}

void breakPoint()
{
	int ran = 2;

	int temp[10];
	int x = 0;
	for (int i = ran, x = 0; i < 5; i++, x++)
	{
		temp[x] = binaryArr[0][i];
		binaryArr[0][i] = binaryArr[1][i];
		binaryArr[1][i] = temp[x];
	}
    cout<<endl <<"After Cross Over: "<<endl;

	for (int i =0; i<5; i++)
	{
		cout<< binaryArr[0][i];
	}
	cout<<endl;

	for (int i =0; i<5; i++)
	{
		cout<< binaryArr[1][i];
	}
}


void mutation()

{
    int brk1=1, brk2=2;

    if (binaryArr[0][brk1]==0)
        binaryArr[0][brk1]=1;
        else
            binaryArr[0][brk1]=0;

        if (binaryArr[1][brk1]==0)
        binaryArr[1][brk1]=1;
        else
            binaryArr[1][brk1]=0;

    cout<<endl<<"After Mutation:"<<endl;

    for (int i =0; i<5; i++)
	{
		cout<< binaryArr[0][i];
	}
	cout<<endl;

	for (int i =0; i<5; i++)
	{
		cout<< binaryArr[1][i];

    }

}

int arrToNumber(int xx)
{
	stringstream ss;

	for (unsigned i = 0; i < 5; ++i)
		ss << binaryArr[xx][i];  //read
	int result;
	ss >> result;

	return result;
}

int main()
{
    cout<<"Population Numbers : ";
    cin>>populationNum;
    cout<<endl;
    cout <<"Enter Chromosome set (Binary Numbers) : ";
    cout<<endl;
    for(int i=0;i<populationNum;i++)
    {
        int binNum;
        cin>>binNum;
        binToDec(binNum);
        BinNumToArr(binNum, i);
        cout<<endl;
    }
    for(int i=0;i<populationNum;i++)
    {
        funcX2(arr[i]);
        cout<<arr[i]<<endl;
    }

    for(int i=0;i<populationNum;i++)
    {
        cout<<arrX2[i]<<endl;
    }

    for(int i=0;i<populationNum;i++)
    {
        sum+=arrX2[i];
    }
    cout<<sum<<endl;

    int avg=sum/populationNum;
    cout<< avg<<endl;

    int temp=MaxNumber();
    fitness(avg);
    cout<<endl;

    while(1)
    {
        i=0; j=0;
        breakPoint();
         mutation();
         for(int i=0;i<populationNum;i++)
    {
        int binNum=arrToNumber(i);
        binToDec(binNum);
        BinNumToArr(binNum, i);
        cout<<endl;
    }
    for(int i=0;i<populationNum;i++)
    {
        funcX2(arr[i]);
        cout<<arr[i]<<endl;
    }

    for(int i=0;i<populationNum;i++)
    {
        cout<<arrX2[i]<<endl;
    }

    for(int i=0;i<populationNum;i++)
    {
        sum+=arrX2[i];
    }
    cout<<sum<<endl;

    int avg=sum/populationNum;
    cout<< avg<<endl;

    int mn=MaxNumber();

    fitness(avg);

     if (mn<=temp)
     break;
     temp=mn;

    }

    return 0;
}

/*
4
10110
10001
11000
10101
*/
