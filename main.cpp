#include <iostream>
#include <conio.h>
#include <string.h>
#include <windows.h>

using namespace std;

void BubbleSort()
{
    int jumlah_data, x;
    cout << "Masukkan Jumlah Data : " ;
    cin>>jumlah_data;

    int Angka[jumlah_data];
    for(x=0; x<jumlah_data; x++)
    {
        cout << "\nData ke - ["<<x+1<<"] : " ;
        cin>>Angka[x];

    }

    int i,j;
    for(int i=1; i < jumlah_data; i++)
    {
        for(int j=0; j < jumlah_data-i; j++)
        {
            if (Angka[j] > Angka[j+1])
            {
                int temp;
                temp = Angka[j];
                Angka[j] = Angka[j+1];
                Angka[j+1] = temp;
            }
        }
    }
    cout << "\nHasil Pengurutan Bubble sort : \n";
    for(x=0; x<jumlah_data; x++)
    {
        cout<<"\t"<<Angka[x];
    }
}

void SelectionSort()
{
    int jumlah_data, x;
    cout << "Masukkan Jumlah Data : " ;
    cin>>jumlah_data;

    int Angka[jumlah_data];
    for(x=0; x<jumlah_data; x++)
    {
        cout << "\nData ke - ["<<x+1<<"] : " ;
        cin>>Angka[x];

    }

    int i,j;
    for(i = 0; i < jumlah_data; i++)
    {
        int minimum = i;
        for(j=i+1; j<jumlah_data; j++)
        {
            if(Angka[minimum]>Angka[j])
                minimum=j;
        }
        if(Angka[i] != Angka[minimum])
        {
            int temp = Angka[i];
            Angka[i] = Angka[minimum];
            Angka[minimum] = temp;
        }
    }
    cout << "\nHasil Pengurutan Selection sort : \n";
    for(x=0; x<jumlah_data; x++)
    {
        cout<<"\t"<<Angka[x];

    }
}
void InsertionSort()
{
    int jumlah_data, x;
    cout << "Masukkan Jumlah Data : " ;
    cin>>jumlah_data;

    int Angka[jumlah_data];
    for(x=0; x<jumlah_data; x++)
    {
        cout << "\nData ke - ["<<x+1<<"] : " ;
        cin>>Angka[x];

    }

    int i,j;
    for(i=1; i<=jumlah_data-1; i++)
    {
        int temp=Angka[i];
        j=i-1;

        while((temp<Angka[j])&&(j>=0))
        {
            Angka[j+1]=Angka[j];
            j=j-1;
        }

        Angka[j+1]=temp;
    }

    cout << "\nHasil Pengurutan Insertion sort : \n";
    for(x=0; x<jumlah_data; x++)
    {
        cout<<"\t"<<Angka[x];

    }
}

int main()
{
    int pil;
    char a;
    system("CLS");
menu:
    cout<<"Program Sorting\n";
    cout<<"1. Bubble Sort\n"<<"2. Selection Sort\n"<<"3. Insertion Sort\n";
    cout<<"Masukkan pilihan : ";
    cin>>pil;

    switch(pil)
    {
    case 1:
        BubbleSort();
        break;
    case 2:
        SelectionSort();
        break;
    case 3:
        InsertionSort();
        break;

    }
    cout<<"\n\nUlangi Sorting? (Y/N)";
    cin>>a;
    if(a=='y' || a=='Y')
    {
        goto menu;

    }


    return 0;
}
