#include<iostream>
using namespace std;
int main(){

    //array - [] -> subscript operator
    //1 - fixed size
    //2 - data stroed in sequence
    //3 - indexing starts with 0
    //4 - to store multiple data

    /*
    //print elements of array
    //int data[10];
    int data[]={2,5,7,8};
    for(int i=0; i<4;i++){
        cout<<data[i]<<endl;
    }
    //addition
        int data[]={2,4,5,6,7,8};
    int sum=0;
    int size =sizeof(data)/sizeof(data[0]);
    for(int i=0;i<size;i++){
        sum=data[i]=sum;
    }
    cout<<sum;

    //dynamic printing of elements
    int number_of_data;
    cout<<"Enter no of data you want to enter";
    cin>>number_of_data;

    int data[number_of_data];//5

    for(int i=0;i<number_of_data;i++){
        cout<<"Enter data";
        cin>>data[i];
    }
    int size = sizeof(data)/sizeof(data[0]);

    for (int i=0;i<size;i++){
        cout<<data[i]<<" ";
    }


    //update value
    int data[]={1,3,5,6,7};

    int size = sizeof(data)/sizeof(data[0]);//5

    for(int i=0;i<size;i++){
    data[i]=data[i]+5;
    }

    for(int i=0;i<size;i++){
        cout<<data[i]<<" ";
    }

    //delete
    int data[]={1,3,5,6,7}
    int value;
    cout<<"Enter a value to remove \t";
    cin>>value;

    int size = sizeof(data)/sizeof(data(0))

    for(int i=0;i<size;i++){
        if(data[i]==value){
            data[i]=0;
        }
    }
    for(int i=0;i<size;i++){
        cout<<data[i]<<" ";
    }

    //reverse of digits using array
  int data[]={1,2,3,4,5};
  int size = sizeof(data)/sizeof(data[0]);
  int i=0;
  int j=(size-1);
  while(i!=j){
    int temp = data[i];
    data[i]=data[j];
    data[j]=temp;
    i++;
    j--;
  }
  for(int i;i<size;i++){
  cout<<data[i]<<" ";
  }


//find missing numbers
  int arr[]={1,2,4,6,8};
  int size = sizeof(arr)/sizeof(arr[0]);//5
  for(int i=0;i<size-1;i++){
    int temp =arr[i+1]-arr[i];
    if(temp!=1){
        cout<<arr[i]+1<<" ";
    }
  }

  //Types of array
  //1- one dimension array - int arr[] - only one subscript operator
  //2- two dimension array - int arr[][] - only two subscript operator
  //3- multi dimension array - int arr[][][] - more than two subscript operator
  //where 2 means 2 array and 3 means 3 digits on both array
  int arr[2][3]={
      {1,2,3},
      {4,5,6}
  };
  /*int s = sizeof(arr)/sizeof(arr[0][0]);
  int s = sizeof(arr[0])/sizeof(arr[0][0]);
  cout<<s;

  for(int i = 0;i<2;i++){
    for(int j = 0;j<3;j++){
    cout<<arr[i][j];
    }
    cout<<endl;
  }
  */
  //multi dimension array
  int arr[2][2][2]={
  {{1,2},{3,4}},
  {{5,6},{7,8}}
}
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
                for(int k=0;k<2;k++){
                    cout<<arr[i][j][k];
                }
                cout<<endl;
        }
        cout<<endl;
    }
}
