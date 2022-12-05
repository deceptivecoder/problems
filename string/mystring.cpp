#include<iostream>
#include <string.h>
#include<vector>
using namespace std;
int main(){
    char a = 'A';
    const char* char_ptr = &a;//(char*)"Delhi";//(char*)"Delhi";
    *char_ptr = 'B';
    
    //char_ptr++;
    cout<<char_ptr<<endl;
    cout<<&char_ptr<<endl;
    printf("char_ptr: %p\n", char_ptr);
    printf("&char_ptr: %p\n", &char_ptr);
    //char_ptr = "Mumbai";
    //char * const ptr = &a;
    //*ptr = 'B;

    //cout<< ptr <<" "<<endl;
    //char_ptr[1] = 'x';
    
    for(int i = 0; i<strlen(char_ptr); i++){
        
        cout<< char_ptr[i] <<" ";
    }
    
    cout<<endl<<"strlen str: "<<strlen(char_ptr)<<endl;
    cout<<endl<<"sizeof str: "<<sizeof(char_ptr)<<endl;

    // vector <char *> v = {"one", "two", "three", "four"};
    // for (auto & str: v)
    //     cout<<str<<endl;
    // cout<<v.size()<<endl;

    cout<<endl<<endl;
    char arr[] = "Bangalore";
    printf("arr: %p\n", arr);
    printf("&arr: %p\n", &arr);
    // array[10] = 'X';
    //arr++;
    

     for(int i = 0; i<strlen(arr); i++){
         cout<< arr[i] << " ";
     }
    
    cout<<endl<<strlen(arr)<<endl;
    cout<<endl<<"sizeof array: "<<sizeof(arr)<<endl;

    cout<<endl;
}
