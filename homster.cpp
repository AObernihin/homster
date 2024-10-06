
#include <iostream>
using namespace std;

int changeDate(int day1, int month1, int year1, int day2, int month2, int year2) 
{
    int ychange = year1 - year2;
    int sum1 = day1 + month1 * 30;
    int sum2 = day2 + month2 * 30;
    if (year1 % 4 == 0) 
    {
        sum1 += 1;
    }
    if (year2 % 4 == 0)
    {
        sum2 += 1;
    }
    int change = (sum1 - sum2) + (ychange * 365);
    return change;
}

int middle(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    int mid = sum / size;
    return mid;
}

void value(int arr[], int size) 
{
    int vzero = 0, vneg = 0, vpoz = 0;
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] == 0) 
        {
            vzero += 1;
        }
        if (arr[i] > 0)
        {
            vpoz += 1;
        }
        if (arr[i] < 0)
        {
            vneg += 1;
        }
    }
    cout << vzero << " " << vpoz << " " << vneg << endl;
}
template<typename T>
void printmat(T mat, int size) 
{
    for (int i = 0; i < size; i++) 
    {
        for (int j = 0; j < size; j++) 
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

//template<typename T, int size>
//T min(T mat[size][size], int size)
//{
//    T min = mat[0][0];
//        for (int i = 0; i < size; i++) 
//        {
//            if(mat[i][i] < min) 
//            {
//                min = mat[i][i];
//            }
//                       
//        }
//    return min;
//}


int main()
{
   int matr[2][2] { 1,2,3,4 };
   int arr[15]{ 1,2,3,4,5,6,7,8,9,10,0,0,0,-1,-4 };
   cout << changeDate(12, 4, 2024, 11, 2, 2021) << endl;
   cout << middle(arr,15) << endl;
   value(arr, 15);
   printmat(matr , 2);
   /*cout << min(matr, 2);*/

   
   

}

