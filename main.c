////#include<stdio.h>
////#include<stdlib.h>
////
////int main(){
////    int n;
////    printf("ENTER SIZE OF ARRAY\n");
////    scanf("%d", &n);
////    int arr[n];
////    printf("ENTER THE ELEMENTS OF ARRAY\n");
////    for(int f = 0;f<n;f++){
////        printf("ENTER ELEMENT AT %d : ", f);
////        scanf("%d", &arr[f]);
////    }
////    printf("\n");
////    int i,j,t,ff=0;
////    for(int i=0;i<n;i++)
////    {
////            printf("Pass= %d, i=%d\n",i+1,i);
////         for(j=0;j<n-i-1;j++){
////          printf("\nj = %d\n",j);
////
////            if(arr[j]>arr[j+1]){
////
////        for(int f = 0;f<n;f++){
////            if(f==0)
////            printf("\nOriginal array: ");
////        printf("%d, ", arr[f]);
////        }
////        //printf("\n");
////                t =arr[j];
////                arr[j] = arr[j+1];
////                arr[j+1] = t;
////
////                for(int w = 0;w<n;w++)
////                {
////                    if(w==0)
////                    printf("\nChanged array: ");
////                    printf("%d, ",arr[w]);
////                }
////
////            printf("\nSwapped %d with %d\n",t,arr[j]);
////            }
////            else
////            {
////                printf("No change in array because %d is already less than %d\n", arr[j],arr[j+1]);
////            for(int f = 0;f<n;f++)
////             printf("%d ", arr[f]);
////             printf("\n");
////            }
////
////        }
////
////        printf("\n");
////    }
////    printf("\nTHE SORTED ARRAY IS ");
////    for(i = 0; i<n;i++)
////        printf("%d  ", arr[i]);
////
////}
//#include<stdio.h>
//#include<stdlib.h>
//
//int main() {
//    int n;
//    printf("ENTER SIZE OF ARRAY\n");
//    scanf("%d", &n);
//
//    // Initialize array with 50,000 random numbers
//    int arr[n];
//    printf("GENERATING RANDOM NUMBERS...\n");
//    for (int f = 0; f < n; f++) {
//        arr[f] = rand();  // Using rand() to generate random numbers
//    }
//
//    // Print the original array
////    printf("\nOriginal array: ");
////    for(int f = 0; f < n; f++) {
////        printf("%d, ", arr[f]);
////    }
////    printf("\n\n");
//
//    int i, j, t, ff = 0;
//    for (i = 0; i < n; i++) {
//        // printf("Pass= %d, i=%d\n", i + 1, i);
//        for (j = 0; j < n - i - 1; j++) {
//            //     printf("\nj = %d\n", j);
//
//            if (arr[j] > arr[j + 1]) {
//
//                // Swap elements
//                t = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = t;
//
//                //     printf("\nSwapped %d with %d\n", t, arr[j]);
////            } else {
////                printf("No change in array because %d is already less than %d\n", arr[j], arr[j + 1]);
////            }
//
//                // Print the array after each pass
////                printf("Array: ");
////                for (int f = 0; f < n; f++) {
////                    printf("%d, ", arr[f]);
////                }
////                printf("\n");
//            }
//            printf("\n");
//        }
//
//        printf("\nTHE SORTED ARRAY IS ");
//        for (i = 0; i < n; i++)
//            printf("%d  ", arr[i]);
//
//        return 0;
//    }
//}#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    int n;
//    printf("ENTER SIZE OF ARRAY\n");
//    scanf("%d", &n);
//
//    // Initialize array with 50,000 random numbers
//    int arr[n];
//    printf("GENERATING RANDOM NUMBERS...\n");
//    for (int f = 0; f < n; f++) {
//        arr[f] = rand();  // Using rand() to generate random numbers
//    }
//
//    // Print the original array
//    int i, j, t;
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < n - i - 1; j++) {
//            if (arr[j] > arr[j + 1]) {
//                // Swap elements
//                t = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = t;
//            }
//        }
//    }
//
//    printf("\nTHE SORTED ARRAY IS ");
//    for (i = 0; i < n; i++)
//        printf("%d  ", arr[i]);
//
//    return 0;
//}
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("ENTER SIZE OF ARRAY\n");
    scanf("%d", &n);

    // Initialize array with 50,000 random numbers
    int arr[n];
    printf("GENERATING RANDOM NUMBERS...\n");
    for (int f = 0; f < n; f++) {
        arr[f] = rand();  // Using rand() to generate random numbers
    }

    // Print the original array
    int i, j, t;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }

    printf("\nTHE SORTED ARRAY IS ");
    for (i = 0; i < n; i++)
        printf("%d  ", arr[i]);

    return 0;
}
