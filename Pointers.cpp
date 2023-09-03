#include<iostream>
using namespace std;
// int * fun(){
//     int x = 10;
//     return &x;
// }

// void fun(int a[]) {
//     cout << a[0] << " ";
// }

void swap(char *x,char *y){
    char *t = x;
    x = y;
    y = t;
}

int main(){

    // int num = 5;
    // cout<< num <<endl;

    // //adress of Operator - &

    // cout<< "The number is : "<<num<<endl;
    // cout<< "The Adress is : "<<&num<<endl;


    // int *ptr = &num;
    // cout<< "The Adress is : "<<ptr<<endl;
    // cout<< "The value is : "<<*ptr<<endl;

    // cout<<"The size of integer is : "<< sizeof(num) <<endl;
    // cout<<"The size of Pointer is : "<< sizeof(ptr) <<endl;

    // //copying one  pointer to another.

    // int *q = ptr;
    // cout<<"The size of integer is : "<< sizeof(num) <<endl;
    // cout<<"The size of Pointer is : "<< sizeof(q) <<endl;

    // cout<< ptr << '-' << q <<endl;
    // cout<< *ptr << '-' << *q <<endl;


    // int i = 10;
    // int * p; 
    // p = & i; 
    // cout << "Address of the variable i is " << p << endl; 
    // cout << "Address of the pointer p is " << & p;


    // int firstvalue = 5, secondvalue = 15; 
    // char thirdvalue = 'a'; 
    // int * p1, * p2; 
    // char * p3; 
    // p1 = & firstvalue; // p1 = address of firstvalue 
    // p2 = & secondvalue; // p2 = address of secondvalue 
    // p3 = & thirdvalue; // p3 = address of thirdvalue 
    // * p1 = 10; // value pointed to by p1 = 10
    // * p2 = * p1; // value pointed to by p2 = value pointed to by p1 
    // p1 = p2; // p1 = p2 (value of pointer is copied) 
    // * p1 = 20; // value pointed to by p1 = 20 
    // * p3 = 'b'; // value pointed to by p3 = ‘b ’ 
    // cout << "firstvalue is " << firstvalue << endl; 
    // cout << "secondvalue is " << secondvalue << endl; 
    // cout << "thirdvalue is " << thirdvalue << endl;



    //Null Pointer .
    // int *ptr = NULL;
    // cout<< " The value  of Pointer :" << ptr << endl;


    // //Double Pointers.
    // int i= 5;
    // int *p = &i; //pointer .
    // int **q = &p;//pointer to pointer.

    // //next three  return same value ..address of a./

    // cout<< &i <<endl;
    // cout<< p <<endl;
    // cout<< *q <<endl;

    // //next three  return same value .. address of p./
    // cout<< &p <<endl;
    // cout<< q <<endl;

    // //next three  return same value ..address of q./
    // cout<< i <<endl;
    // cout<< *p <<endl;
    // cout<< **q <<endl;


    /*   Void Pointers */
    // void * ptr ;
    // int i = 10;

    // ptr = &i;

    // cout<<"Address of the variable : "<<&i<<endl;

    // cout<< "Address of void pointing :"<<ptr<<endl;


    // int * p = fun(); // p points to a function which is not valid anymore.
    // cout<< *p <<endl;

    // int a[] = {4,5,6,7};
    // // cout << *(a) << " " << *(a+1);

    // int  *p = (a + 1);
    // cout<< *a + 9;

    // char s[]= "hello";
    // char *p = s;
    // cout << s[0] << " " << p[0];

    // char arr[20];
    // int i;
    // for(int i = 0;i<10;i++){
    //     *(arr + i) = 65+i;
    // }
    // *(arr + i) = '\0' ;
    // cout<<arr;


    // int numbers[5];
    // int * p;
    // p = numbers;
    // *p  = 10;
    // p=&numbers[2];
    // *p=20;
    // p--;
    // *p=30;
    // p = numbers + 3;
    // *p=40;
    // p = numbers;
    // *(p+4) = 50;
    // for(int n = 0;n<5;n++){
    //     cout<< numbers[n] << "," ;
    // }

    // char st[] = "ABCD";
    // for(int i = 0; st[i] != '\0' ; i++){
    //     cout<< st[i] << *(st)+i << *(i + st) << i[st] <<endl;
    //}

    // int a[] = {1, 2, 3, 4};
    // fun(a + 1);
    // cout << a[0];

    char *x = "ninjasquiz";
    char *y = "coding ninjas";
    char *t;
    swap(x,y);
    cout<< x << " " <<y;
    t = x;
    x = y;
    y = t;
    cout<< " " << x << " " <<y;
  


    return 0;
}