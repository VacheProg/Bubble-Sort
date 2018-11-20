
#include<iostream>
template<typename T>
void Bubble_Sort(T arr[],int n){
    T swap;
    for(int i = 0; i < n; ++i)
    {
        
        for(int j = 0; j < n-i-1; ++j)
        {
            if(arr[j+1]<arr[j]){
                swap = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = swap;
            }

        }
        
    }
    
}
int main()
{
    double test[15]= {10.5,12.3,8.2,6.3,9.4};
    int size = 5;
    
    Bubble_Sort(test,size);//Bubble sort, array sorting
    for(size_t i = 0; i < size; ++i) //output after sorting
    {
        std::cout<<"test["<<i<<"] = "<<test[i]<<std::endl;
    }
    
    return 0;
}
