#include<iostream>
void print2Darray(int arr[][3], int row_size, int col_size){ //here, you need to tell atleast size of column before using it, unless it will keep giving error
for(row_size = 0; row_size < 3; row_size++){
for(col_size = 0; col_size < 3; col_size++){
std::cout << arr[row_size][col_size]<<" ";
}
std::cout << std::endl;   // Move to the next row
}

}
int main(){
    //Declaration of 2D array:
    // int arry[5][4]; //firstly [rows][columns]

    //Initialization
    // int arr[2][2] = {{20, 200}, {30, 40}}; //{{Row}, {Column}}

//     int ary[3][3];
//     //taking input in array
//     int row = 3;
//     int col = 3;
// for(row = 0; row < 3; row++){
// for(col = 0; col < 3; col++){
// std::cout << "Enter an element for index ["<<row<<"]["<<col<<"]: ";
// std::cin>> ary[row][col];
// }
// }
// for(row = 0; row < 3; row++){
// for(col = 0; col < 3; col++){
// std::cout << ary[row][col]<<" ";
// }
// std::cout << std::endl;   // Move to the next row
// }

//Printing array using function:
int arr[4][3];
int row = 4;
int col = 3;
for(row = 0; row < 4; row++){
for(col = 0; col < 3; col++){
std::cout << "Enter an element for index ["<<row<<"]["<<col<<"]: ";
std::cin>> arr[row][col];
}
}
print2Darray(arr, row, col);

    return 0;
}