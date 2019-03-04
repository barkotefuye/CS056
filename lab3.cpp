/* =>(a) Write a function countEven(int*, int) which receives an integer array and its size, and returns
the number of even numbers in the array.
=>(b) Write a function that returns a pointer to the maximum value in a double array. If the array is
empty, return NULL.
(c) Write a function that receives an array and its size and returns another array of the same size and
containing the same elements.
(d) Write a function that receives 2 arrays and their size and swaps their elements. Both arrays have
the same size. The function does not return anything.

(a) Write a function myStrLen(char*) which returns the length of the parameter cstring. Write the
function without using the C++ function strlen.
(b) Write a function that takes a string (char*) as argument and prints it in reverse order.
(c) Write a function that takes a string (char*) as argument and reverses it. The function returns
nothing.
(d) Write a program to input 2 strings from the user and then append one string to the other.
(e) Write a function that receives 2 strings and returns 0 if their lengths are equal, -1 if the first string
is longer, and +1 if the second string is longer.
(f) Write a function contains(char*, char) which returns true if the 1st parameter cstring contains
the 2nd parameter char, or false otherwise.
(g) A palindrome is a string that reads the same forward and backward, e.g. “madam”. Write a function
that receives a string and returns true if the string is a palindrome, or false otherwise. */

//int []
int [] countEven(int *array, int size){
    *newArray = new int[0];
    for(int i = 0; i < size ; i++){
        if (*(array + i) % 2 == 0){
            *newArray.append(*(array+ i));
        }
        
    }
    return *newArray;
}

int* retPointer(int *array, int size){
    int *max = array;
    for(int i = 0; i < size ; i++){
        if(*max < *(array+i)){
            *max = *(array+i);
        }
    }
    return max;
    //q's
}

//int []
int [] arraySame(int *array, int size){
    int[] newArray = *array;
    return newArray;
}

void swap(int *arr1, int *arr2, int size){
    int *temp;
    for(int i = 0; i < size ; i++){
        temp = (arr1 + i);
        (arr1+i) = (arr2 + i);
        arr2 = temp;
    }
}

//print string length

 void myStrlen(char* str){
     int count = 0;
     while (*str != "\0"){
         ++count;
     }
     std::cout << count;

}
//is 0 counted?

void printReverse(char* str){
    for(int i = myStrLen(str)-1; i >= 0; i--){
        std::cout << *(str + i);
    }
}

void reverseString(char* str){
    int temp = 0;
    for(int i = 0; i < myStrLen(str)/2; ++i){
        temp = *(str + i);
        *(str + i) = *(str + (myStrLen(str)-i));
        *(str + (myStrLen(str)-i)) = *(str + i);
    }
}






main(){


}